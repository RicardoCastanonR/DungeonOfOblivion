call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat"
SetLocal EnableDelayedExpansion

REM Get a list of all the .cpp files.
SET cppFilenames=
FOR /R %%f in (*.cpp) do (
    SET cppFilenames=!cppFilenames! %%f
)

SET OUTPUT=/Fe:../bin/Debug/engine.dll /Fo:../bin/Debug/
SET OPTIONS=/EHsc /MDd /DLL /LD /D ENGINE_EXPORTS /D DEBUG /Z7 /DEBUG:NONE /MACHINE:X64
SET INCLUDES=/I%VULKAN_SDK%/Include /IE:/DungeonOfOblivion/vendor/includes
SET LIBS=/link user32.lib /LIBPATH:%VULKAN_SDK%/Lib vulkan-1.lib /LIBPATH:E:/DungeonOfOblivion/vendor/lib/Debug glfw3dll.lib

cl /std:c++17 %OUTPUT% %OPTIONS% %cppFilenames% %INCLUDES% %LIBS%
