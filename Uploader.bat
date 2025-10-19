@echo off
setlocal EnableDelayedExpansion

:: === 配置部分 ===
set "WORKDIR=C:\MyDocuments\programStudy"
set "LOGDIR=C:\MyDocuments\programStudyLogs"

:: 创建日志目录(如果不存在)
if not exist "%LOGDIR%" mkdir "%LOGDIR%"

:: 获取日期时间(用于日志文件名)
for /f %%I in ('PowerShell -NoProfile -Command "Get-Date -Format yyyyMMdd-HHmmss"') do set "LOGDATETIME=%%I"
set "LOGFILE=%LOGDIR%\%LOGDATETIME%.log"

:: 获取开始时间(用于显示)
for /f %%I in ('PowerShell -NoProfile -Command "Get-Date -Format HH:mm:ss"') do set "START_TIME=%%I"

:: 获取开始时间戳(毫秒)
for /f %%I in ('PowerShell -NoProfile -Command "(Get-Date).ToUniversalTime().Subtract([datetime]'1970-01-01').TotalMilliseconds"') do set "START_MS=%%I"

:: 控制台提示
echo Starting Git synchronization...
echo Log file: %LOGFILE%

:: 写入日志头
(
    echo === Git Synchronization Started at %START_TIME% ===
    echo.
) > "%LOGFILE%"

:: 切换目录并执行Git命令
cd /d "%WORKDIR%" 2>> "%LOGFILE%"
git config --global core.quotepath false >> "%LOGFILE%" 2>&1
git config --global i18n.commitEncoding utf-8 >> "%LOGFILE%" 2>&1
git config --global i18n.logOutputEncoding utf-8 >> "%LOGFILE%" 2>&1

(
    git pull
    git rm -r --cached .
    git add .
    git commit -m "Update by Git Synchronization Program"
    git push
) >> "%LOGFILE%" 2>&1

:: 获取结束时间
for /f %%I in ('PowerShell -NoProfile -Command "Get-Date -Format HH:mm:ss"') do set "END_TIME=%%I"

:: 计算用时 (秒, 精确到两位小数)
for /f %%I in ('PowerShell -NoProfile -Command "$start=%START_MS%; $now=(Get-Date).ToUniversalTime().Subtract([datetime]'1970-01-01').TotalMilliseconds; [math]::Round(($now-$start)/1000,2)"') do set "DURATION=%%I"

:: 写入日志尾部
(
    echo.
    echo === Git Synchronization Completed at %END_TIME% ===
    echo.
    echo Total synchronization time: %DURATION%s
) >> "%LOGFILE%" 2>&1

:: 控制台输出完成信息
echo Git synchronization completed.
echo Total time: %DURATION%s

endlocal
exit /b
