#include "WindowManager.h"

WindowManager::WindowManager(const int& WIDTH, const int& HEIGHT, const char* WindowName) {
    initWindow(WIDTH, HEIGHT, WindowName);
}

WindowManager::~WindowManager() {
    glfwDestroyWindow(window);
    glfwTerminate();
    std::cout << "Window deleted successfuly!" << std::endl;
}

GLFWwindow* WindowManager::getWindow() {
    return window;
}

void WindowManager::initWindow(const int& WIDTH, const int& HEIGHT, const char* WindowName){
    glfwInit();
    
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    window = glfwCreateWindow(WIDTH, HEIGHT, WindowName, nullptr, nullptr);
}