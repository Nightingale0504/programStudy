@echo off
setlocal EnableDelayedExpansion

:: 时间分解
for /f "tokens=1-4 delims=:.," %%a in ("%STARTTIME%") do (
    set /a "start=(((%%a*60)+1%%b%%100)*60+1%%c%%100)*100+1%%d%%100"
)

:: 构造日志文件名
set year=%date:~0,4%
set month=%date:~5,2%
set day=%date:~8,2%
set hh=%time:~0,2%
if "%hh:~0,1%"==" " set hh=0%hh:~1,1%
set mn=%time:~3,2%
set ss=%time:~6,2%
set timestamp=%hh%%mn%%ss%
set LOGDIR=C:\MyDocuments\programStudyLogs
set LOGFILE=%LOGDIR%\%year%%month%%day%-%timestamp%.log
if not exist "%LOGDIR%" mkdir "%LOGDIR%"

:: —— 切换至 UTF-8 并保存旧 CodePage ——
for /f "tokens=2 delims=: " %%A in ('chcp') do set "OLDCP=%%A"
chcp 65001 >nul

:: —— 确保 Git 输出中文 ——  
git config --global core.quotepath false

:: --- 1. 打印开始提示并记录开始时间 ---
echo Starting Git Sync: %date% %time%
set "STARTTIME=%time: =0%"

echo === Starting Git Sync: %date% %time% === > "%LOGFILE%"

cd /d C:\MyDocuments\programStudy

:: --- 2. 执行 Git 命令，错误时跳转 ---
git pull               >> "%LOGFILE%" 2>&1 || goto ERROR
git rm -r --cached .   >> "%LOGFILE%" 2>&1 || goto ERROR
git add .              >> "%LOGFILE%" 2>&1 || goto ERROR

:: 自定义提交信息
set commitMsg=Update %year%/%month%/%day% %hh%:%mn%:%ss%
git commit -m "%commitMsg%" >> "%LOGFILE%" 2>&1 || goto ERROR

git push               >> "%LOGFILE%" 2>&1 || goto ERROR


:: —— 恢复原始 CodePage ——
chcp %OLDCP% >nul

:: --- 3. 记录结束时间并计算用时 ---
set "ENDTIME=%time: =0%"
for /f "tokens=1-4 delims=:.," %%a in ("%ENDTIME%") do (
    set /a "end=(((%%a*60)+1%%b%%100)*60+1%%c%%100)*100+1%%d%%100"
)
set /a elapsed=end-start
:: 将毫秒差格式化为 hh:mm:ss.cc
set /a hh=elapsed/(60*60*100), rest=elapsed%%(60*60*100)
set /a mn=rest/(60*100), rest=rest%%(60*100)
set /a ss=rest/100, cc=rest%%100
if %hh% lss 10 set hh=0%hh%
if %mn% lss 10 set mn=0%mn%
if %ss% lss 10 set ss=0%ss%
if %cc% lss 10 set cc=0%cc%
set DURATION=%hh%:%mn%:%ss%.%cc%

>> "%LOGFILE%" echo.
>> "%LOGFILE%" echo Elapsed Time: %DURATION%

:: --- 4. 输出结束提示 ---
echo Finished Git Sync: Start=%STARTTIME%  End=%ENDTIME%  Elapsed=%DURATION%
goto EOF

:ERROR
echo.
echo *** Git 操作失败，详情如下：***
type "%LOGFILE%"
echo.
pause
exit /b 1


:EOF
endlocal
