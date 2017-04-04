REM Zmienne do ustawienia
SET ARMA3SYNC_REPO_NAME=StanLakesideNP
SET ARMA3SYNC_DIR=C:\Program Files (x86)\ArmA3Sync
SET TOOLS_DIR=C:\Program Files (x86)\Mikero\DePboTools\bin
SET GITHUB_DIR=P:\NoPixel
SET ARMA3_DIR=C:\Program Files (x86)\Steam\steamapps\common\Arma 3
SET REPO_DIR=D:\StanLakesideNP
SET ARMA3TOOLS_DIR=D:\Steamcmd\steamapps\common\Arma 3 Tools\DSSignFile
SET ARMA3TOOLS_KEY=C:\Users\root\Desktop\StanLakeside.biprivatekey
SET REPO_UPLOAD=P:\REPO_UPLOAD

REM -----------------------------------------------------------------------------------------

REM Generacja zmiennych
SET GITHUB_ADDONS_DIR=%GITHUB_DIR%\@nopixel\addons
SET GITHUB_MISSION_DIR=%GITHUB_DIR%\SERWER #1\SL_NoPixel_0.0.0.Jackson_County
CD /D %ARMA3_DIR%\MPMissions
SET /p BUILD=<version.txt
SET MISSION_NAME=SL_NoPixel_0.0.%BUILD%.Jackson_County.pbo
SET MISSION_NAME_STRING=SL_NoPixel_0.0.%BUILD%.Jackson_County
SET MISSION_NAME_STRING_OLD=SL_NoPixel_0.0.%BUILD%.Jackson_County

CD %GITHUB_DIR%
git pull --rebase

REM usunięcie starych plików
CD /D %GITHUB_ADDONS_DIR%
DEL *.pbo
DEL *.bisign

REM budowanie addonów
FOR /d %i IN (*.*) DO ("%TOOLS_DIR%\MakePbo.exe" "-PsgF!Z=*.wss,jpg,.wav,fsm,pac,*.sqf,*.ogg" "-X=thumbs.db,*.txt,*.h,*.dep,*.bak,*.png,*.log,*.pew, *.psd" "%GITHUB_ADDONS_DIR%\%i"
)

REM robienie kluczy
FOR %i IN (*.pbo) DO ("%ARMA3TOOLS_DIR%\DSSignFile.exe" "%ARMA3TOOLS_KEY%" "%i")

REM kopiowanie na serwer oraz do repo
COPY /Y *.pbo %ARMA3_DIR%\@nopixel\addons\
COPY /Y *.bisign %ARMA3_DIR%\@nopixel\addons\
COPY /Y *.pbo %REPO_DIR%\@nopixel\addons\
COPY /Y *.bisign %ARMA3_DIR%\@nopixel\addons\
CD /D %REPO_UPLOAD%
FOR %i IN (*.pbo) DO ("%ARMA3TOOLS_DIR%\DSSignFile.exe" "%ARMA3TOOLS_KEY%" "%i")
COPY /Y *.pbo %ARMA3_DIR%\@nopixel\addons\
COPY /Y *.bisign %ARMA3_DIR%\@nopixel\addons\
COPY /Y *.pbo %REPO_DIR%\@nopixel\addons\
COPY /Y *.bisign %ARMA3_DIR%\@nopixel\addons\


REM budowanie repo
CD /D %ARMA3SYNC_DIR%
Java -jar ArmA3Sync.jar -BUILD "%ARMA3SYNC_REPO_NAME%"

REM budowanie misji
"%TOOLS_DIR%\MakePbo.exe" "-PgF!WZ=*.wss,jpg,.wav,fsm,pac" "-X=thumbs.db,*.txt,*.h,*.dep,*.bak,*.png,*.log,*.pew, *.psd" "%GITHUB_MISSION_DIR%" "%ARMA3_DIR%\MPMissions"
CD /D %ARMA3_DIR%\MPMissions
fc /b SL_NoPixel_0.0.0.Jackson_County.pbo %MISSION_NAME% > nul
if errorlevel 1 (
	@(set /a BUILD+=1 >nul)
	SET MISSION_NAME=SL_NoPixel_0.0.%BUILD%.Jackson_County.pbo
	SET MISSION_NAME_STRING=SL_NoPixel_0.0.%BUILD%.Jackson_County
	MOVE SL_NoPixel_0.0.0.Jackson_County.pbo %MISSION_NAME%
	ECHO %BUILD%>version.txt
	CD %ARMA3_DIR%\TADST\nopixel
	powershell -Command "(gc TADST_config.cfg) -replace '%MISSION_NAME_STRING_OLD%', '%MISSION_NAME_STRING%' | Out-File TADST_config.cfg"
)

REM budowanie pliku serwerowego
CD /D %GITHUB_DIR%\SERWER #1\
"%TOOLS_DIR%\MakePbo.exe" "-PsgF!Z=*.wss,jpg,.wav,fsm,pac,*.sqf,*.ogg" "-X=thumbs.db,*.txt,*.h,*.dep,*.bak,*.png,*.log,*.pew, *.psd" "%GITHUB_DIR%\SERWER #1\nopixel_server"
MOVE /Y "%GITHUB_DIR%\SERWER #1\nopixel_server\nopixe_server.pbo" /Y %ARMA3_DIR%\@NP_Server\addons\

REM przygotowanie serwera
COPY /Y %GITHUB_DIR%\SERWER #1\@extDBNP\sql_custom\rpframework.ini %ARMA3_DIR%\@extDBNP\sql_custom\