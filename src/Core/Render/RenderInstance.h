#ifndef RENDER_INSTANCE_H
#define RENDER_INSTANCE_H

#include <defines.h>

class RenderInstance{
  public:
    RenderInstance(const char* app_name);
    ~RenderInstance();

  private:
    const char* APPLICATION_NAME;
    VkInstance instance;
    void createInstance();

};


#endif