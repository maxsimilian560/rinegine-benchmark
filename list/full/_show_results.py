import json, statistics, sys
from collections import defaultdict

with open(sys.argv[1], encoding='utf-8') as f:
    data = json.load(f)

groups = defaultdict(list)
for b in data['benchmarks']:
    name = b['name'].split('/')[0] + '/' + b['name'].split('/')[1] if '/' in b['name'] else b['name']
    groups[name].append(b['real_time'] / 1e6)

for name in sorted(groups.keys()):
    vals = groups[name]
    avg = statistics.mean(vals)
    med = statistics.median(vals)
    sd = statistics.stdev(vals) if len(vals) > 1 else 0
    cv = (sd / avg * 100) if avg > 0 else 0
    print(f'{name:40s} avg={avg:8.2f} ms  med={med:8.2f} ms  sd={sd:.2f}  CV={cv:.1f}%  ({len(vals)} runs)')
