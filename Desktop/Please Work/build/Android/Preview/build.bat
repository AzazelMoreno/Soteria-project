:: This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/UnoCore/1.8.0/Targets/Android/build.bat.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off
pushd "%~dp0"

:: #if #(JDK.Directory:IsSet)
set JAVA_HOME=C:\Program Files\Java\jdk1.8.0_144
:: #endif

call gradlew assembleDebug %* || goto ERROR
copy /Y app\build\outputs\apk\app-debug.apk "Please Work.apk" || goto ERROR
popd && exit /b 0

:ERROR
popd && exit /b 1
