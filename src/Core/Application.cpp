#include "Application.h"

void Application::run(){
    initWindow();
    initVulkan();
    mainLoop();
    cleanup();
}

void Application::initWindow(){
    windowManager = new WindowManager(WIDTH, HEIGHT, APPLICATION_NAME);
}

void Application::initVulkan(){
    renderInstance = new RenderInstance(APPLICATION_NAME);
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
