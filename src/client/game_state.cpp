#include "game_state.h"

#include <iostream>

#include <SFML/Network/Packet.hpp>
#include <SFML/System/InputStream.hpp>

#include "ball.h"
#include "movement_message.h"
#include "paddle.h"

GameState::GameState(Connection& connection)
    : connection_(connection) {
    entityList_.push_back(std::make_unique<Paddle>(Paddle::PADDLE_WIDTH / 2.f, 0));
}

void GameState::HandleInput(sf::RenderWindow& window) {
    for (auto const& entity : entityList_) {
        entity->HandleInput(window);
    }
    MovementMessage move(0, sf::Mouse::getPosition(window).y);
    sf::Packet packet = move.Serialize();
    connection_.Send(packet);
    /*if (connection_.Receive(packet) == sf::Socket::Done) {
        int type;
        unsigned int entity_id;
        unsigned int position;
        packet >> type >> entity_id >> position;
        temporaryTestingPositionDeleteThis_ = position;
        std::cerr << type << " " << entity_id << " " << position << std::endl;
    }*/
}

void GameState::Update() {
    for (auto const& entity : entityList_) {
        entity->Update();
    }
}

void GameState::Render(sf::RenderWindow& window) {
    window.clear(sf::Color(0, 0, 0));
    for (auto const& entity : entityList_) {
        entity->Render(window);
    }
    window.display();
}
