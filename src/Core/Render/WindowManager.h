#ifndef WINDOW_MANAGER_H
#define WINDOW_MANAGER_H

#include <defines.h>

class WindowManager {
  public:
    WindowManager();
    ~WindowManager();

    GLFWwindow* getWindow();
  private:
    GLFWwindow* window;
    void initWindow();
};

#endif