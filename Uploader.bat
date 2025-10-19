@echo off
setlocal EnableDelayedExpansion

:: 设置工作目录和日志目录
set "WORKDIR=C:\MyDocuments\programStudy"
set "LOGDIR=C:\MyDocuments\programStudyLogs"

:: 创建日志目录( 如果不存在 )
if not exist "%LOGDIR%" (
    mkdir "%LOGDIR%"
)

:: 获取当前日期和时间( 格式: YYYYMMDD-HHmmss ) 用于日志文件名
for /f %%I in ('PowerShell -NoProfile -Command "Get-Date -Format yyyyMMdd-HHmmss"') do set "LOGDATETIME=%%I"
set "LOGFILE=%LOGDIR%\%LOGDATETIME%.log"

:: 记录开始时间字符串( HH:mm:ss )和开始时间戳( 毫秒 )
for /f %%I in ('PowerShell -NoProfile -Command "Get-Date -Format HH:mm:ss"') do set "START_TIME=%%I"
for /f %%I in ('PowerShell -NoProfile -Command "[int64]::Parse((Get-Date).ToUniversalTime().Subtract([datetime]''1970-01-01'').TotalMilliseconds)"') do set "START_MS=%%I"

:: 控制台提示
echo Starting Git synchronization...
echo Log file: %LOGFILE%

:: 写入日志头( 覆盖新建 )
(
    echo === Git Synchronization Program Started at %START_TIME% ===
    echo.
) > "%LOGFILE%"

:: 切换到工作目录并执行 git 操作( 全部追加到日志 )
cd /d "%WORKDIR%" 2>> "%LOGFILE%"
:: 推荐先设置这些以避免中文文件名乱码
git config --global core.quotepath false >> "%LOGFILE%" 2>&1
git config --global i18n.commitEncoding utf-8 >> "%LOGFILE%" 2>&1
git config --global i18n.logOutputEncoding utf-8 >> "%LOGFILE%" 2>&1

:: 执行并把输出都追加到日志( 包括错误 )
(
    git pull
    git rm -r --cached .
    git add .
    git commit -m "Update by Git Synchronization Program"
    git push
) >> "%LOGFILE%" 2>&1

:: 获取结束时间字符串
for /f %%I in ('PowerShell -NoProfile -Command "Get-Date -Format HH:mm:ss"') do set "END_TIME=%%I"

:: 计算用时( 秒，保留两位小数 )— 使用 PowerShell 计算以避免批处理整数精度问题
for /f %%I in ('PowerShell -NoProfile -Command "[math]::Round(((Get-Date).ToUniversalTime().Subtract([datetime]''1970-01-01'').TotalMilliseconds - %START_MS%) / 1000.0, 2)"') do set "DURATION=%%I"

:: 将完成信息和用时追加到日志
(
    echo.
    echo === Git Synchronization Program Completed at %END_TIME% ===
    echo.
    echo Total synchronization time: %DURATION%s
) >> "%LOGFILE%" 2>&1

:: 控制台显示完成与用时
echo Git synchronization completed.
echo Total time: %DURATION%s

endlocal
exit /b
