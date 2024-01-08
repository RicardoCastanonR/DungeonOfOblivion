#ifndef DEFINES_H
#define DEFINES_H

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <string>
#include <iostream>
#include <stdexcept>

#include "Render/WindowManager.h"
#include "Render/RenderInstance.h"

namespace{
    const int WIDTH = 800;
    const int HEIGHT = 600;
    const char* APPLICATION_NAME = "DungeonOfOblivion";
}

#endif