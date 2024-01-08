#ifndef APPLICATION_H
#define APPLICATION_H

#include <defines.h>

class Application {
  public:
    void run();

  private:
    WindowManager *windowManager; 
    RenderInstance *renderInstance; 

    const int WIDTH = 800;
    const int HEIGHT = 600;
    const char* APPLICATION_NAME = "DungeonOfOblivion";

    void initWindow();
    void initVulkan();
    void mainLoop();
    void cleanup();
    
};

#endif