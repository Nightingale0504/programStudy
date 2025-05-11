@echo off
setlocal EnableDelayedExpansion

:: Set working and log directories
set "WORKDIR=C:\MyDocuments\programStudy"
set "LOGDIR=C:\MyDocuments\programStudyLogs"

:: Create log directory if it doesn't exist
if not exist "%LOGDIR%" (
    mkdir "%LOGDIR%"
)

:: Get current date in YYYYMMDD format
for /f "tokens=2 delims==" %%I in ('PowerShell -Command "Get-Date -Format yyyyMMdd"') do set "LOGDATE=%%I"
set "LOGFILE=%LOGDIR%\%LOGDATE%.log"

:: Record start time in seconds
for /f %%I in ('PowerShell -Command "(Get-Date).ToUniversalTime().Subtract([datetime]'1970-01-01').TotalSeconds"') do set "STARTTIME=%%I"

:: Display start message
echo Starting Git synchronization...
echo Log file: %LOGFILE%

:: Redirect output to log file
(
    echo === Git Synchronization Started at %date% %time% ===
    echo.

    :: Change to working directory
    cd /d "%WORKDIR%"

    :: Set Git to use UTF-8 encoding to handle Chinese characters properly
    git config --global core.quotepath false
    git config --global i18n.logoutputencoding utf-8

    :: Perform Git operations
    git pull
    git rm -r --cached .
    git add .
    git commit -m "Update"
    git push

    echo.
    echo === Git Synchronization Completed at %date% %time% ===
) > "%LOGFILE%" 2>&1

:: Record end time in seconds
for /f %%I in ('PowerShell -Command "(Get-Date).ToUniversalTime().Subtract([datetime]'1970-01-01').TotalSeconds"') do set "ENDTIME=%%I"

:: Calculate duration in seconds
set /a DURATION=ENDTIME - STARTTIME

:: Append duration to log file
echo. >> "%LOGFILE%"
echo Total synchronization time: %DURATION% seconds >> "%LOGFILE%"

:: Display completion message
echo Git synchronization completed.
echo Total time: %DURATION% seconds

endlocal
exit /b
