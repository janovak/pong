#include "main_loop.h"

#include <memory>

MainLoop::MainLoop() {

}

MainLoop::~MainLoop() {

}

void MainLoop::Loop() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Pong");
    window.setFramerateLimit(60);
    Connection connection("localhost", 3001);
    currentGameState_ = std::make_shared<GameState>(connection);
    gameStateStack_.push(currentGameState_);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            } else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                window.close();
            }
        }
        currentGameState_->HandleInput(window);
        currentGameState_->Update();
        currentGameState_->Render(window);
    }
}
