#!/bin/bash
set -e

echo "╔═══════════════════════════════════════════╗"
echo "║  Full Benchmark Run                       ║"
echo "╚═══════════════════════════════════════════╝"
echo ""

echo "[1/4] Drop page caches"
sync
echo 3 | sudo tee /proc/sys/vm/drop_caches >/dev/null 2>&1 || echo "    ⚠ Нет прав"

echo "[2/4] Disable THP"
echo never | sudo tee /sys/kernel/mm/transparent_hugepage/enabled >/dev/null 2>&1 || echo "    ⚠ Нет прав"

echo "[3/4] Running: nice -20, taskset -c 0, 10 restarts, 0.5s"
echo ""

nice -n -20 taskset -c 0 \
  ./benchmark_runner \
    --benchmark_format=json \
    --benchmark_out=list/full/result.json \
    --benchmark_min_time=0.5s \
    --benchmark_repetitions=10

# ── Восстановление ─────────────────────────────
echo ""
echo "[4/4] Restore + Generate"
python3 gen_chart.py list/full/result.json list/full/result.md list/full/chart.svg

# ── Вывод ───────────────────────────────────────
echo ""
echo "╔═══════════════════════════════════════════╗"
echo "║  Results (average of 5 replicates)        ║"
echo "╚═══════════════════════════════════════════╝"
echo ""

python3 -c "
import json, statistics

with open('list/full/result.json') as f:
    data = json.load(f)

from collections import defaultdict
groups = defaultdict(list)
for b in data['benchmarks']:
    if b.get('run_type') == 'aggregate':
        continue
    name = b['name'].split('/')[0] + '/' + b['name'].split('/')[1] if '/' in b['name'] else b['name']
    groups[name].append(b['real_time'] / 1e6)  # ns → ms

for name in sorted(groups.keys()):
    vals = groups[name]
    avg = statistics.mean(vals)
    med = statistics.median(vals)
    sd = statistics.stdev(vals) if len(vals) > 1 else 0
    cv = (sd / avg * 100) if avg > 0 else 0  # coefficient of variation
    print(f'{name:40s} avg={avg:8.2f} ms  med={med:8.2f} ms  σ={sd:.2f}  CV={cv:.1f}%  ({len(vals)} runs)')
"
