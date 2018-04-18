:: This file was generated based on C:/Users/rudy0/AppData/Local/Fusetools/Packages/UnoCore/1.8.0/Targets/Android/log.bat.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off
pushd "%~dp0"

REM Setup variables
set SDK_DIR=C:\Users\rudy0\AppData\Local\Android\sdk
set ADB="%SDK_DIR%\platform-tools\adb.exe"

%ADB% logcat -s "Debug","dalvik","error","Error","BufferQueue","XliApp","Xli","DEBUG","System.err","AndroidRuntime","LogSvc","Adreno-ES20","Adreno-EGL","libEGL","BDWGC","art","OpenGLRenderer","HardwareRenderer","PleaseWork"
