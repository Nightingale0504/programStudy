@echo off
setlocal EnableDelayedExpansion

:: 设置工作目录和日志目录
set "WORKDIR=C:\MyDocuments\programStudy"
set "LOGDIR=C:\MyDocuments\programStudyLogs"

:: 创建日志目录（如果不存在）
if not exist "%LOGDIR%" (
    mkdir "%LOGDIR%"
)

:: 获取当前日期和时间（格式：YYYYMMDD-HHmmss）
for /f %%I in ('PowerShell -NoProfile -Command "Get-Date -Format yyyyMMdd-HHmmss"') do set "LOGDATETIME=%%I"
set "LOGFILE=%LOGDIR%\%LOGDATETIME%.log"

:: 获取当前时间（格式：HH:mm:ss）用于日志内容
for /f %%I in ('PowerShell -NoProfile -Command "Get-Date -Format HH:mm:ss"') do set "LOGTIME=%%I"

:: 记录开始时间（Unix 时间戳，精确到毫秒）
for /f %%I in ('PowerShell -NoProfile -Command "[int64]::Parse((Get-Date).ToUniversalTime().Subtract([datetime]\"1970-01-01\").TotalMilliseconds)"') do set "STARTTIME=%%I"

:: 显示开始提示
echo Starting Git synchronization...
echo Log file: %LOGFILE%

:: 将输出重定向到日志文件
(
    echo === Git Synchronization Started at %LOGTIME% ===
    echo.

    :: 切换到工作目录
    cd /d "%WORKDIR%"

    :: 设置 Git 配置以正确处理中文文件名
    git config --global core.quotepath false
    git config --global i18n.commitEncoding utf-8
    git config --global i18n.logOutputEncoding utf-8

    :: 执行 Git 操作
    git pull
    git rm -r --cached .
    git add .
    git commit -m "Update"
    git push

    echo.
    :: 获取当前时间用于日志尾部
    for /f %%I in ('PowerShell -NoProfile -Command "Get-Date -Format HH:mm:ss"') do set "LOGTIME_END=%%I"
    echo === Git Synchronization Completed at !LOGTIME_END! ===
) > "%LOGFILE%" 2>&1

:: 记录结束时间（Unix 时间戳，精确到毫秒）
for /f %%I in ('PowerShell -NoProfile -Command "[int64]::Parse((Get-Date).ToUniversalTime().Subtract([datetime]\"1970-01-01\").TotalMilliseconds)"') do set "ENDTIME=%%I"

:: 计算同步所用时间（毫秒）
set /a DURATION_MS=ENDTIME - STARTTIME

:: 将用时转换为秒，保留两位小数
for /f %%I in ('PowerShell -NoProfile -Command "[math]::Round(%DURATION_MS% / 1000.0, 2)"') do set "DURATION=%%I"

:: 将用时追加到日志文件末尾
echo. >> "%LOGFILE%"
echo Total synchronization time: %DURATION%s >> "%LOGFILE%"

:: 显示完成提示
echo Git synchronization completed.
echo Total time: %DURATION%s

endlocal
exit /b
