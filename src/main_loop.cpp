#include "main_loop.h"

#include <memory>

MainLoop::MainLoop() {
}

MainLoop::~MainLoop() {
}

void MainLoop::Loop() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Pong");
    current_game_state_ = std::make_shared<GameState>(window);
    game_state_stack_.push(current_game_state_);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                window.close();
            }

            current_game_state_->HandleInput();
            current_game_state_->Update();
            current_game_state_->Render();
        }
        window.clear(sf::Color(0, 0, 0));
        window.display();
    }
}
