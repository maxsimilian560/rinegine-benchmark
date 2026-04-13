@echo off
set "ROOT=%~dp0..\.."
cd /d "%ROOT%"

powershell -Command ".\benchmark_runner.exe --benchmark_format=json 2>&1 | Tee-Object list\fast\result_tmp.json"
powershell -Command "$c = Get-Content list\fast\result_tmp.json -Raw; [System.IO.File]::WriteAllText('list\fast\result.json', $c, [System.Text.UTF8Encoding]::new($false)); Remove-Item list\fast\result_tmp.json"
python gen_chart.py list/fast/result.json list/fast/result.md list/fast/chart.svg
