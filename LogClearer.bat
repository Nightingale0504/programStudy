@echo off
setlocal enabledelayedexpansion

:: 配置参数
set "log_dir=C:\MyDocuments\programStudyLogs"
set "retention_days=30"

:: 获取当前日期序列（兼容XP系统）
for /f "tokens=2 delims==" %%a in ('wmic os get localdatetime /value') do set "now=%%a"
set "now=!now:~0,8!"

:: 计算过期日期（使用PowerShell计算精确日期）
for /f %%d in ('powershell -command "(Get-Date).AddDays(-%retention_days%).ToString('yyyyMMdd')"') do (
    set "expire_date=%%d"
)

echo 正在清理 [!now!] 之前的日志（保留%retention_days%天）
echo 过期阈值日期：%expire_date%

:: 遍历日志文件
for %%F in ("%log_dir%\*.log") do (
    set "filename=%%~nF"
    set "file_date=!filename:~0,8!"
    
    :: 验证日期有效性
    echo !file_date! | findstr /r "^20[0-9][0-9][01][0-9][0-3][0-9]$" >nul
    if !errorlevel! equ 0 (
        if !file_date! lss !expire_date! (
            del /q "%%F"
            echo [DEL] !filename!.log
        ) else (
            echo [KEEP] !filename!.log
        )
    ) else (
        echo [SKIP] 非法日期格式: !filename!.log
    )
)

endlocal
echo 清理操作完成
pause