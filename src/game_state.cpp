#include "game_state.h"

GameState::GameState(sf::RenderWindow& window)
    : window_(window) {
}

GameState::~GameState() {
}

void GameState::HandleInput() {
    sf::Event event;
    while (window_.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
        }
        if (event.type == sf::Event::MouseMoved) {
            printf("%d\n", event.mouseMove.y);
        }
    }
}

void GameState::Update() {
}

void GameState::Render() {
}
