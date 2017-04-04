REM Autor: Kajetan "Kruk" Mruk
SET ARMA3SYNC_REPO_NAME=StanLakesideNP
SET ARMA3SYNC_DIR=C:\Program Files (x86)\ArmA3Sync
SET TOOLS_DIR=C:\Program Files (x86)\Mikero\DePboTools\bin
SET GITHUB_DIR=P:\NoPixel
SET ARMA3_DIR=C:\Program Files (x86)\Steam\steamapps\common\Arma 3
SET REPO_DIR=D:\StanLakesideNP
SET ARMA3TOOLS_DIR=D:\Steamcmd\steamapps\common\Arma 3 Tools\DSSignFile
SET ARMA3TOOLS_KEY=C:\Users\root\Desktop\StanLakeside.biprivatekey
SET REPO_UPLOAD=P:\REPO_UPLOAD
SET GITHUB_ADDONS_DIR=%GITHUB_DIR%\@nopixel\addons
SET GITHUB_MISSION_DIR=%GITHUB_DIR%\SERWER #1\SL_NoPixel_0.0.0.Jackson_County
CD /D "%ARMA3_DIR%\MPMissions"
SET /p BUILD=<version.txt
SET MISSION_NAME=SL_NoPixel_0.0.%BUILD%.Jackson_County.pbo
SET MISSION_NAME_STRING=SL_NoPixel_0.0.%BUILD%.Jackson_County
SET MISSION_NAME_STRING_OLD=SL_NoPixel_0.0.%BUILD%.Jackson_County
CD /D %GITHUB_DIR%
git pull --rebase
CD /D P:\
DEL *.pbo
DEL *.bisign
FOR /d %%i IN (kif_* sl_* red_*) DO ("%TOOLS_DIR%\MakePbo.exe" "-PsgF!Z=*.wss,jpg,.wav,fsm,pac,*.sqf,*.ogg" "-X=thumbs.db,*.txt,*.h,*.dep,*.bak,*.png,*.log,*.pew, *.psd" "P:\%%i")
FOR %%i IN (*.pbo) DO ("%ARMA3TOOLS_DIR%\DSSignFile.exe" "%ARMA3TOOLS_KEY%" "%%i")
COPY /Y *.pbo "%ARMA3_DIR%\@nopixel\addons\"
COPY /Y *.bisign "%ARMA3_DIR%\@nopixel\addons\"
MOVE /Y *.pbo "%REPO_DIR%\@nopixel\addons\"
MOVE /Y *.bisign "%REPO_DIR%\@nopixel\addons\"
CD /D %REPO_UPLOAD%
FOR %%i IN (*.pbo) DO ("%ARMA3TOOLS_DIR%\DSSignFile.exe" "%ARMA3TOOLS_KEY%" "%%i")
COPY /Y *.pbo "%ARMA3_DIR%\@nopixel\addons\"
COPY /Y *.bisign "%ARMA3_DIR%\@nopixel\addons\"
MOVE /Y *.pbo "%REPO_DIR%\@nopixel\addons\"
MOVE /Y *.bisign "%REPO_DIR%\@nopixel\addons\"
CD /D %ARMA3SYNC_DIR%
Java -jar ArmA3Sync.jar -BUILD "%ARMA3SYNC_REPO_NAME%"
"%TOOLS_DIR%\MakePbo.exe" "-PgF!WZ=*.wss,jpg,.wav,fsm,pac" "-X=thumbs.db,*.txt,*.h,*.dep,*.bak,*.png,*.log,*.pew, *.psd" "%GITHUB_MISSION_DIR%" "%ARMA3_DIR%\MPMissions"
CD /D "%ARMA3_DIR%\MPMissions"
fc /b "SL_NoPixel_0.0.0.Jackson_County.pbo" "%MISSION_NAME%" > nul
if errorlevel 1 (
	@(set /a BUILD+=1 >nul)
	SET MISSION_NAME=SL_NoPixel_0.0.%BUILD%.Jackson_County.pbo
	SET MISSION_NAME_STRING=SL_NoPixel_0.0.%BUILD%.Jackson_County
	MOVE /Y SL_NoPixel_0.0.0.Jackson_County.pbo %MISSION_NAME%
	ECHO %BUILD%>version.txt
	CD %ARMA3_DIR%\TADST\nopixel
	powershell -Command "(gc TADST_config.cfg) -replace '%MISSION_NAME_STRING_OLD%', '%MISSION_NAME_STRING%' | Out-File TADST_config.cfg"
)
CD /D %GITHUB_DIR%\
MOVE /Y "%GITHUB_DIR%\SERWER #1\nopixel_server" P:\
"%TOOLS_DIR%\MakePbo.exe" "-PsgF!Z=*.wss,jpg,.wav,fsm,pac,*.sqf,*.ogg" "-X=thumbs.db,*.txt,*.h,*.dep,*.bak,*.png,*.log,*.pew, *.psd" "P:\nopixel_server"
MOVE /Y "P:\nopixel_server.pbo" "%ARMA3_DIR%\@NP_Server\addons\"
MOVE /Y P:\nopixel_server "%GITHUB_DIR%\SERWER #1\"
COPY /Y "%GITHUB_DIR%\SERWER #1\@extDBNP\sql_custom\rpframework.ini" "%ARMA3_DIR%\@extDBNP\sql_custom\"
CD /D P:\
DEL *.pbo
DEL *.bisign