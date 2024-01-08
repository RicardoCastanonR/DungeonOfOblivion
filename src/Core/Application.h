#ifndef APPLICATION_H
#define APPLICATION_H

#include <defines.h>

class Application {
  public:
    void run();

  private:
    WindowManager *windowManager; 
    RenderInstance *renderInstance; 

    void initWindow();
    void initVulkan();
    void mainLoop();
    void cleanup();
    
};

#endif