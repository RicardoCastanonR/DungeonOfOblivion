//#include <defines.h>
#include "Core/Application.h"

int main() {
  Application* app = new Application();

  try {
    app->run();
  } catch (const std::exception& e) {
    std::cerr << e.what() << std::endl;
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}