:: This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/UnoCore/1.8.0/Targets/Android/run.bat.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off
pushd "%~dp0"

if "%1" == "debug" (
    echo Opening Android Studio
    call gradlew --recompile-scripts
    "C:\Program Files (x86)\Fuse\uno.exe" open -a"Android Studio" -t"Please Work" "%~dp0app/app.iml"
    exit /b %ERRORLEVEL%
)

if "%1" == "uninstall" (
    echo Uninstalling com.apps.pleasework
    "C:\Program Files (x86)\Fuse\uno.exe" adb uninstall com.apps.pleasework
    exit /b %ERRORLEVEL%
)

"C:\Program Files (x86)\Fuse\uno.exe" launch-apk "%~dp0Please Work.apk" ^
    --package=com.apps.pleasework ^
    --activity=PleaseWork ^
    --sym-dir="%~dp0src\main\.uno" ^
    %*
exit /b %ERRORLEVEL%
