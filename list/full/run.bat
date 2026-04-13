@echo off
cd /d %~dp0..\..
echo =========================================
echo   Fair Benchmark - maksimalnaya stabilnost
echo =========================================
echo.

echo [1/4] Skip cache prep (Windows)
echo     [!] Linux-specific operations skipped
echo.

echo [2/4] Skip THP (Windows)
echo     [!] Linux-specific operations skipped
echo.

echo [3/4] Running benchmark_runner (3 repeats, 0.5s)
echo.

.\benchmark_runner.exe ^
    --benchmark_format=json ^
    --benchmark_out=list/full/result.json ^
    --benchmark_min_time=0.5s ^
    --benchmark_repetitions=3

echo.
echo [4/4] Restore + Generate
python gen_chart.py list/full/result.json list/full/result.md list/full/chart.svg

echo.
echo =========================================
echo   Results (average of repeats)
echo =========================================
echo.

python list/full/_show_results.py list/full/result.json
