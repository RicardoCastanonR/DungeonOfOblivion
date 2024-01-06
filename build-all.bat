@ECHO OFF
REM Build Everything

ECHO "Building everyghin.."

ECHO "Building engine"
PUSHD engine
CALL build.bat
POPD
IF %ERRORLEVEL% NEQ 0 (
    echo Error:%ERRORLEVEL% && exit
)

ECHO "Building application"
PUSHD DungeonOfOblivion
CALL build.bat
POPD
IF %ERRORLEVEL% NEQ 0 (echo Error:%ERRORLEVEL% && exit)

ECHO "All assemblies build successfully"