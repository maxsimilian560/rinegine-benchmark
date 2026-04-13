@echo off
setlocal

:: Запускаем PowerShell-скрипт для баннера
call :print_banner "Launching FULL List Benchmark"

for /f %%a in ('powershell -command "Get-Date -UFormat %%s"') do set start_time=%%a

@REM call list\full\run.bat

echo.
call :print_banner "Launching FAST List Benchmark"

call list\fast\run.bat

for /f %%a in ('powershell -command "Get-Date -UFormat %%s"') do set end_time=%%a
set /a elapsed=end_time - start_time

echo.
powershell -NoProfile -Command "Write-Host '[OK] All benchmarks completed in' -ForegroundColor Green -NoNewline; Write-Host ' %elapsed%s' -ForegroundColor Yellow"
echo.
goto :eof

:print_banner
powershell -NoProfile -Command "$name = '%~1'; $e = [char]27; Write-Host ($e + '[48;5;26m' + $e + '[1;38;5;208m==========================================='); Write-Host ($e + '[48;5;26m' + $e + '[1;38;5;208m|    ' + $e + '[48;5;26m' + $e + '[1;38;5;46m ' + $name + '      ' + $e + '[48;5;26m' + $e + '[1;38;5;208m >'); Write-Host ($e + '[48;5;26m' + $e + '[1;38;5;208m===========================================' + $e + '[0m')"
goto :eof
