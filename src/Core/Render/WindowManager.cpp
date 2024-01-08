#include "WindowManager.h"

WindowManager::WindowManager() {
    initWindow();
}

WindowManager::~WindowManager() {
    glfwDestroyWindow(window);
    glfwTerminate();
    std::cout << "Window deleted successfuly!" << std::endl;
}

GLFWwindow* WindowManager::getWindow() {
    return window;
}

void WindowManager::initWindow(){
    glfwInit();
    
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    window = glfwCreateWindow(WIDTH, HEIGHT, APPLICATION_NAME, nullptr, nullptr);
}