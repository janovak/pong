#include "game_state.h"

#include "movement_message.h"

GameState::GameState(sf::RenderWindow& window)
    : window_(window) {
}

GameState::~GameState() {
}

void GameState::HandleInput() {
    sf::Event event;
    while (window_.pollEvent(event)) {
        if (event.type == sf::Event::MouseMoved) {
            MovementMessage move(0, event.mouseMove.y);
            for (auto i : move.Serialize()) {
                printf("%d ", i);    
            }
            printf("\n");
        }
    }
}

void GameState::Update() {
}

void GameState::Render() {
}
