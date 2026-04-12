#/usr/bin sh
./benchmark_runner --benchmark_format=json | tee benchmark_result2.json && ./gen_chart.py benchmark_result2.json RESULTS2.md chart2.svg
