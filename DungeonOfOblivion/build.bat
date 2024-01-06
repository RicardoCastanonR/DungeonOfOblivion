call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat"
SetLocal EnableDelayedExpansion

REM Get a list of all the .cpp files.
SET cppFilenames=
FOR /R %%f in (*.cpp) do (
    SET cppFilenames=%cppFilenames% %%f
)

SET OUTPUT=/Fe:../bin/Debug/application.exe /Fo:../bin/Debug/
SET OPTIONS=/EHsc /D ENGINE_IMPORTS /NDEBUG /Z7 /MACHINE:X64 /DEBUG:NONE
SET INCLUDES=/I../engine/src /IE:\DungeonOfOblivion\vendor/includes /I%VULKAN_SDK%/Include
SET LIBS=/link /LIBPATH:E:/DungeonOfOblivion/bin/Debug engine.lib

cl /std:c++17 %OUTPUT% %OPTIONS% %cppFilenames% %INCLUDES% %LIBS%
