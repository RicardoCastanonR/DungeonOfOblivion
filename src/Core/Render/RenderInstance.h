#ifndef RENDER_INSTANCE_H
#define RENDER_INSTANCE_H

#include <defines.h>

class RenderInstance{
  public:
    RenderInstance();
    ~RenderInstance();

  private:
    VkInstance instance;
    void createInstance();

};


#endif