@echo off
setlocal EnableDelayedExpansion

:: 设置工作目录和日志目录
set "WORKDIR=C:\MyDocuments\programStudy"
set "LOGDIR=C:\MyDocuments\programStudyLogs"

:: 创建日志目录（如果不存在）
if not exist "%LOGDIR%" (
    mkdir "%LOGDIR%"
)

:: 获取当前日期和时间（格式:  YYYYMMDD-HHmmss）
for /f %%I in ('PowerShell -NoProfile -Command "Get-Date -Format yyyyMMdd-HHmmss"') do set "LOGDATETIME=%%I"
set "LOGFILE=%LOGDIR%\%LOGDATETIME%.log"

:: 获取当前时间（格式:  HH:mm:ss）用于日志内容
for /f %%I in ('PowerShell -NoProfile -Command "Get-Date -Format HH:mm:ss"') do set "LOGTIME=%%I"

:: 显示开始提示
echo Starting Git synchronization...
echo Log file: %LOGFILE%

:: 将输出重定向到日志文件
(
    echo === Git Synchronization Started at %LOGTIME% ===
    echo.

    :: 执行 Git 操作并将输出保存到日志文件
    cd /d "%WORKDIR%"
    git pull
    git rm -r --cached .
    git add .
    git commit -m "Update"
    git push

    echo.
    echo === Git Synchronization Completed at %LOGTIME% ===
    echo.
) > "%LOGFILE%" 2>&1

:: 显示完成提示
echo Git synchronization completed.

endlocal
exit /b