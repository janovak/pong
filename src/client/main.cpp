#include <SFML/Graphics.hpp>

#include "main_loop.h"

int main(int, char const**) {
    MainLoop mainLoop;
    mainLoop.Loop();
    return EXIT_SUCCESS;
}
