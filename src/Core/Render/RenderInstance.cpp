#include "RenderInstance.h"

RenderInstance::RenderInstance(const char* app_name){
    APPLICATION_NAME = app_name;
    createInstance();
    std::cout << "Instance created successfully!" << std::endl;
}

RenderInstance::~RenderInstance(){
    vkDestroyInstance(instance, nullptr);
    std::cout << "Instance destroyed successfully!" << std::endl;
}

void RenderInstance::createInstance(){
    // VkApplicationInfo
    VkApplicationInfo applicationInfo{};
    applicationInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    applicationInfo.pApplicationName = APPLICATION_NAME;
    applicationInfo.apiVersion = VK_API_VERSION_1_3;
    applicationInfo.pApplicationName = "No Engine";
    applicationInfo.engineVersion = VK_API_VERSION_1_3;
    applicationInfo.apiVersion = VK_API_VERSION_1_3;

    // GLFWextensions
    uint32_t glfwExtensionCount = 0;
    const char** glfwExtensions;
    glfwExtensions = glfwGetRequiredInstanceExtensions(&glfwExtensionCount);

    // VkInstanceCreateInfo
    VkInstanceCreateInfo createInfo{};
    createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    createInfo.pApplicationInfo = &applicationInfo;
    createInfo.enabledLayerCount = 0;
    createInfo.enabledExtensionCount = glfwExtensionCount;
    createInfo.ppEnabledExtensionNames = glfwExtensions;

    // VkAllocationCallbacks (nullable)
    
    // vkCreateInstance(...)
    if (vkCreateInstance(&createInfo, nullptr, &instance) != VK_SUCCESS) {
        throw std::runtime_error("Failed to create instance!");
    }
}