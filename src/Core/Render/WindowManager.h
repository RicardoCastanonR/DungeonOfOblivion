#ifndef WINDOW_MANAGER_H
#define WINDOW_MANAGER_H

#include <defines.h>

class WindowManager {
  public:
    WindowManager(const int& WIDTH, const int& HEIGHT, const char* WindowName);
    ~WindowManager();

    GLFWwindow* getWindow();
  private:
    GLFWwindow* window;
    void initWindow(const int& WIDTH, const int& HEIGHT, const char* WindowName);
};

#endif