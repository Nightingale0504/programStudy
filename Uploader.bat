@echo off
setlocal EnableDelayedExpansion

:: 日志目录
set LOGDIR=C:\MyDocuments\programStudyLogs
if not exist "%LOGDIR%" mkdir "%LOGDIR%"

:: —— 提取日期和时间 —— 
set year=%date:~0,4%
set month=%date:~5,2%
set day=%date:~8,2%

set hh=%time:~0,2%
if "%hh:~0,1%"==" " set hh=0%hh:~1,1%
set mm=%time:~3,2%
set ss=%time:~6,2%

:: —— 构造并创建日志文件 —— 
set LOGFILE=%LOGDIR%\%year%%month%%day%-%hh%%mm%%ss%.log
echo === Starting Git Sync: %date% %time% === > "%LOGFILE%"

cd /d C:\MyDocuments\programStudy

:: —— 同步操作及错误跳转 —— 
git pull               >> "%LOGFILE%" 2>&1 || goto ERROR
git rm -r --cached .   >> "%LOGFILE%" 2>&1 || goto ERROR
git add .              >> "%LOGFILE%" 2>&1 || goto ERROR

set commitMsg=Update %year%/%month%/%day% %hh%:%mm%:%ss%
git commit -m "%commitMsg%" >> "%LOGFILE%" 2>&1 || goto ERROR
git push               >> "%LOGFILE%" 2>&1 || goto ERROR

echo === Finished Git Sync: %date% %time% === >> "%LOGFILE%"
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
