#include <SFML/Graphics.hpp>

#include "main_loop.h"

int main(int, char const**) {
    MainLoop main_loop;
    main_loop.Loop();
    return EXIT_SUCCESS;
}
