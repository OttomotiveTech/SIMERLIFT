REM Copyright (C) logi.cals GmbH. All rights reserved.
@ECHO OFF
SETLOCAL ENABLEEXTENSIONS

set TARGET_PROXY_PLUGIN_PATH=%~dp0\gatewayplugins\
set TARGET_PROXY_COMM_PLUGIN_PATH=c:\tmp\commplugins\
set TARGET_PROXY_PLC_DATA_PATH=c:\tmp\plcdata\

set AVR_DUDE_PATH=%~dp0\..\avrdude\
set STW_WINFLASH_PATH=%~dp0\..\STWwinflash\
set STW_FLOSSY_PATH=%~dp0\..\STWflossy\

set PATH=%PATH%;%AVR_DUDE_PATH%;%STW_WINFLASH_PATH%;%STW_FLOSSY_PATH%

if not exist %TARGET_PROXY_COMM_PLUGIN_PATH% mkdir %TARGET_PROXY_COMM_PLUGIN_PATH%
if not exist %TARGET_PROXY_PLC_DATA_PATH% mkdir %TARGET_PROXY_PLC_DATA_PATH%

%~dp0\lc3gateway.exe -L- -s TCP:127.0.0.1:1535 -P %TARGET_PROXY_PLUGIN_PATH%
