@echo off
setlocal enabledelayedexpansion
chcp 65001 >nul

:: Configuration
set "log_dir=C:\MyDocuments\programStudyLogs"
set "retention_days=30"

:: Get current date using PowerShell
for /f %%d in ('powershell -command "(Get-Date).ToString('yyyyMMdd')"') do set "now=%%d"

:: Calculate expiration date
for /f %%d in ('powershell -command "(Get-Date).AddDays(-%retention_days%).ToString('yyyyMMdd')"') do set "expire_date=%%d"

echo === Log Cleanup Operation ===
echo Current Date    : !now!
echo Expiration Date : !expire_date!
echo Retention Policy: Delete files older than %retention_days% days
echo Future Date File: Immediate deletion
echo.

:: File processing loop
for %%F in ("%log_dir%\*.log") do (
    set "filename=%%~nF"
    set "file_date=!filename:~0,8!"
    
    :: PowerShell validation (single-line command)
    echo !file_date! | powershell -command "$d=$input.Trim();try{[datetime]$fd=[datetime]::ParseExact($d,'yyyyMMdd',$null);if($fd -gt [datetime]::Today){exit 2}else{exit 0}}catch{exit 1}"
    
    :: Handle validation results
    if !errorlevel! equ 0 (
        if !file_date! lss !expire_date! (
            del /q "%%F" && echo [DEL-EXPIRED] %%F
        ) else (
            echo [KEEP-VALID] %%F
        )
    ) else if !errorlevel! equ 2 (
        del /q "%%F" && echo [DEL-FUTURE] %%F
    ) else (
        echo [SKIP-INVALID] %%F
    )
)

echo.
echo Cleanup operation completed.
pause