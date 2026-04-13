#!/bin/bash
# ═══════════════════════════════════════════════
#  Fair Benchmark — максимальная стабильность
# ═══════════════════════════════════════════════
set -e

echo "╔═══════════════════════════════════════════╗"
echo "║  Fair Benchmark Run                       ║"
echo "╚═══════════════════════════════════════════╝"
echo ""

# ── Подготовка системы ─────────────────────────

echo "[1/4] Drop page caches"
sync
echo 3 | sudo tee /proc/sys/vm/drop_caches >/dev/null 2>&1 || echo "    ⚠ Нет прав"

echo "[2/4] Disable THP"
echo never | sudo tee /sys/kernel/mm/transparent_hugepage/enabled >/dev/null 2>&1 || echo "    ⚠ Нет прав"

# ── Запуск ──────────────────────────────────────
# nice -20     → максимальный приоритет
# taskset -c 0 → одно ядро, без миграции (кэш не сбрасывается)
# --benchmark_repetitions=3 → 3 повтора → медиана отсеивает выбросы
# --benchmark_min_time=0.5s → достаточно (Google Benchmark сам выбирает кол-во итераций)

echo "[3/4] Запуск: nice -20, taskset -c 0, 3 повтора, 0.5s"
echo ""

nice -n -20 taskset -c 0 \
  ./benchmark_runner \
    --benchmark_format=json \
    --benchmark_out=list/full/result.json \
    --benchmark_min_time=0.5s \
    --benchmark_repetitions=3

# ── Восстановление ─────────────────────────────
echo ""
echo "[4/4] Restore + Generate"
python3 gen_chart.py list/full/result.json list/full/result.md list/full/chart.svg

# ── Вывод ───────────────────────────────────────
echo ""
echo "╔═══════════════════════════════════════════╗"
echo "║  Результаты (среднее из 5 повторов)      ║"
echo "╚═══════════════════════════════════════════╝"
echo ""

python3 -c "
import json, statistics

with open('list/full/result.json') as f:
    data = json.load(f)

# Группируем по имени (без суффикса повторения)
from collections import defaultdict
groups = defaultdict(list)
for b in data['benchmarks']:
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
