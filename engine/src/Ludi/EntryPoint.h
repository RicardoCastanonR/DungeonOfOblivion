#ifndef ENTRY_POINT_H
#define ENTRY_POINT_H

extern Ludi::Application* Ludi::CreateApplication();

int main(int argc, char** argv){
    auto app = Ludi::CreateApplication();
    app->Run();
    delete app;
}

#endif