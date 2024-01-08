call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat"
SetLocal EnableDelayedExpansion

REM Get a list of all the .cpp files.
SET cppFilenames=
FOR /R %%f in (*.cpp) do (
    SET cppFilenames=!cppFilenames! %%f
)

ECHO %cppFilenames%

SET OUTPUT=/Fe:bin/Debug/DungeonOfOblivion.exe /Fo:bin/Debug/
SET OPTIONS=/EHsc /D ENGINE_IMPORTS /D NDEBUG /Z7 /DEBUG:NONE
SET INCLUDES=/IE:\DungeonOfOblivion\src\core /IE:\DungeonOfOblivion\vendor/includes /I%VULKAN_SDK%/Include
SET LIBS=/link /LIBPATH:E:\DungeonOfOblivion\vendor\lib\Debug glfw3dll.lib /LIBPATH:%VULKAN_SDK%/Lib vulkan-1.lib /MACHINE:X64

cl /std:c++17 %OUTPUT% %OPTIONS% %cppFilenames% %INCLUDES% %LIBS%
