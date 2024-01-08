#include "Application.h"

void Application::run(){
    initWindow();
    initVulkan();
    mainLoop();
    cleanup();
}

void Application::initWindow(){
    windowManager = new WindowManager();
}

void Application::initVulkan(){
    renderInstance = new RenderInstance();
}

void Application::mainLoop(){
    while (!glfwWindowShouldClose(windowManager->getWindow())){
        glfwPollEvents();
    }
}

void Application::cleanup(){
    delete renderInstance;
    delete windowManager;
}
