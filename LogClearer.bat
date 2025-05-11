@echo off
setlocal enabledelayedexpansion

:: Configuration
set "log_dir=C:\MyDocuments\programStudyLogs"
set "retention_days=30"

:: Get current date using PowerShell
for /f "tokens=1-3 delims= " %%a in ('powershell -command "Get-Date -Format 'yyyy MM dd'"') do (
    set "current_year=%%a"
    set "current_month=%%b"
    set "current_day=%%c"
)

:: Calculate expiration date (30 days ago)
for /f %%d in ('powershell -command "(Get-Date).AddDays(-%retention_days%).ToString('yyyyMMdd')"') do (
    set "expire_date=%%d"
)

echo Cleaning up logs older than %retention_days% days (before %expire_date%)

:: Process log files
for %%F in ("%log_dir%\*.log") do (
    set "filename=%%~nF"
    set "file_date=!filename:~0,8!"
    
    :: Validate date format using PowerShell
    echo !file_date! | powershell -command "$input | ForEach-Object { if ($_ -match '^\d{8}$') { exit 0 } else { exit 1 } }"
    if !errorlevel! equ 0 (
        if !file_date! lss %expire_date% (
            del /q "%%F"
            echo [DELETED] !filename!.log
        ) else (
            echo [RETAINED] !filename!.log
        )
    ) else (
        echo [SKIPPED] Invalid date format: !filename!.log
    )
)

echo Cleanup operation completed
pause