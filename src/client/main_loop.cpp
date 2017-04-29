#include "main_loop.h"

#include <memory>

void MainLoop::Loop() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Pong");
    window.setFramerateLimit(60);
    Connection connection("localhost", 3001);
    gameStateStack_.push(std::make_unique<GameState>(connection));

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            } else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                window.close();
            }
        }
        gameStateStack_.top()->HandleInput(window);
        gameStateStack_.top()->Update();
        gameStateStack_.top()->Render(window);
    }
}
