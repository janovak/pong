#include "game_state.h"

#include <iostream>

#include <SFML/Network/Packet.hpp>
#include <SFML/System/InputStream.hpp>

#include "movement_message.h"

GameState::GameState(sf::RenderWindow& window, Connection& connection)
    : window_(window),
      connection_(connection) {
}

GameState::~GameState() {

}

void GameState::HandleInput() {
    int mouse = sf::Mouse::getPosition(window_).y;
    MovementMessage move(0, mouse);
    sf::Packet packet = move.Serialize();
    connection_.Send(packet);
    if (connection_.Receive(packet) == sf::Socket::Done) {
        int type;
        unsigned int entity_id;
        unsigned int position;
        packet >> type >> entity_id >> position;
        temporaryTestingPositionDeleteThis_ = position;
        std::cerr << type << " " << entity_id << " " << position << std::endl;
    }
}

void GameState::Update() {
    
}

void GameState::Render() {
    window_.clear(sf::Color(0, 0, 0));
    sf::RectangleShape rectangle(sf::Vector2f(20, 50));
    rectangle.setPosition(0, temporaryTestingPositionDeleteThis_);
    rectangle.setFillColor(sf::Color(255, 255, 255));
    window_.draw(rectangle);
    window_.display();
}
