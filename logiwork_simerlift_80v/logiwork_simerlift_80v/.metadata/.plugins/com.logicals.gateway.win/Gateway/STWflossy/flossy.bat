@setlocal
@cd /d %~dp0/%1
@%~dpn0.exe %* -r1
@endlocal
