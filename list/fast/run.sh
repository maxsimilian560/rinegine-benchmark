#/usr/bin sh
./benchmark_runner --benchmark_format=json | tee list/fast/result.json && ./gen_chart.py list/fast/result.json list/fast/result.md list/fast/chart.svg
