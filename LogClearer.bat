@echo off
setlocal enabledelayedexpansion

:: Configuration
set "log_dir=C:\MyDocuments\programStudyLogs"
set "retention_days=30"

:: Get current date in YYYYMMDD format using PowerShell
for /f %%d in ('powershell -command "(Get-Date).ToString('yyyyMMdd')"') do set "now=%%d"

:: Calculate expiration date (30 days ago)
for /f %%d in ('powershell -command "(Get-Date).AddDays(-%retention_days%).ToString('yyyyMMdd')"') do set "expire_date=%%d"

echo Cleaning up logs older than %retention_days% days (before %expire_date%)

:: Improved filename processing
for %%F in ("%log_dir%\*.log") do (
    set "full_filename=%%~nF"
    
    :: Extract date part from filename (YYYYMMDD)
    set "file_date=!full_filename:~0,8!"
    
    :: Enhanced validation with PowerShell
    echo !file_date! | powershell -command "$input | ForEach-Object { 
        $datePart = $_.Trim()
        if ($datePart -match '^\d{8}$') {
            try {
                $year  = $datePart.Substring(0,4)
                $month = $datePart.Substring(4,2)
                $day   = $datePart.Substring(6,2)
                [datetime]::ParseExact($datePart, 'yyyyMMdd', $null) | Out-Null
                exit 0
            } catch { exit 1 }
        } 
        exit 1 
    }"
    
    if !errorlevel! equ 0 (
        if !file_date! lss %expire_date% (
            del /q "%%F"
            echo [DELETED] %%F
        ) else (
            echo [RETAINED] %%F
        )
    ) else (
        echo [SKIPPED] Invalid date format: %%F
    )
)

echo Cleanup operation completed
pause