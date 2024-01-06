#ifndef APPLICATION_H
#define APPLICATION_H

#include "Core.h"

namespace Ludi {
    class LUDI_API Application{
      public:
        Application();
        virtual ~Application();

        void Run();
    };

    Application* CreateApplication();
}


#endif