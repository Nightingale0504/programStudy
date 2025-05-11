@echo off
chcp 65001 >nul
setlocal enabledelayedexpansion

rem Set log directory and timestamp
set "LOGDIR=C:\MyDocuments\programStudyLogs"
for /f %%I in ('powershell -NoLogo -NoProfile -Command "Get-Date -Format yyyyMMdd-HHmmss"') do set "TS=%%I"
set "LOGFILE=%LOGDIR%\%TS%.log"

rem Create log directory if it doesn't exist
if not exist "%LOGDIR%" mkdir "%LOGDIR%"

rem Record start time
for /f %%I in ('powershell -NoLogo -NoProfile -Command "Get-Date"') do set "START_TIME=%%I"

echo ===== Script started at %START_TIME% =====
echo ===== Script started at %START_TIME% ===== | powershell -Command "Out-File -FilePath '%LOGFILE%' -Encoding utf8"

rem Change to the repository directory
cd /d "C:\MyDocuments\programStudy"
if errorlevel 1 goto ERR

rem Execute git pull
echo [1/6] git pull
git pull 2>&1 | powershell -Command "Out-File -FilePath '%LOGFILE%' -Encoding utf8 -Append"
if errorlevel 1 goto ERR

rem Execute git rm -r --cached .
echo [2/6] git rm -r --cached .
git rm -r --cached . 2>&1 | powershell -Command "Out-File -FilePath '%LOGFILE%' -Encoding utf8 -Append"
if errorlevel 1 goto ERR

rem Execute git add .
echo [3/6] git add .
git add . 2>&1 | powershell -Command "Out-File -FilePath '%LOGFILE%' -Encoding utf8 -Append"
if errorlevel 1 goto ERR

rem Get current time for commit message
for /f %%I in ('powershell -NoLogo -NoProfile -Command "Get-Date -Format yyyy/MM/dd HH:mm:ss"') do set "CTIME=%%I"

rem Execute git commit
echo [4/6] git commit -m "Update %CTIME%"
git commit -m "Update %CTIME%" 2>&1 | powershell -Command "Out-File -FilePath '%LOGFILE%' -Encoding utf8 -Append"
if errorlevel 1 goto ERR

rem Execute git push
echo [5/6] git push
git push 2>&1 | powershell -Command "Out-File -FilePath '%LOGFILE%' -Encoding utf8 -Append"
if errorlevel 1 goto ERR

rem Record end time
for /f %%I in ('powershell -NoLogo -NoProfile -Command "Get-Date"') do set "END_TIME=%%I"

rem Calculate elapsed time
for /f %%I in ('powershell -NoLogo -NoProfile -Command "(New-TimeSpan -Start ([datetime]::Parse('%START_TIME%')) -End ([datetime]::Parse('%END_TIME%'))).ToString()"') do set "ELAPSED=%%I"

rem Log end time and elapsed time
echo. | powershell -Command "Out-File -FilePath '%LOGFILE%' -Encoding utf8 -Append"
echo ===== Script ended at %END_TIME% ===== | powershell -Command "Out-File -FilePath '%LOGFILE%' -Encoding utf8 -Append"
echo Total elapsed time: %ELAPSED% | powershell -Command "Out-File -FilePath '%LOGFILE%' -Encoding utf8 -Append"

echo ===== Script completed successfully at %END_TIME% =====
echo Total elapsed time: %ELAPSED%

exit /b 0

:ERR
echo.
echo !!! ERROR: Git command failed. Exiting. !!!
pause
exit /b 1
