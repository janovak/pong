#ifndef game_state_h
#define game_state_h

#include <SFML/Graphics.hpp>

#include "connection.h"
#include "entity.h"
#include "state.h"

class GameState : public State {
public:
    GameState(sf::RenderWindow& window, Connection& connection);
    ~GameState();

    virtual void HandleInput() override;
    virtual void Update() override;
    virtual void Render() override;

private:
    std::vector<Entity> entity_list_;
    sf::RenderWindow& window_;
    Connection& connection_;
    int temporaryTestingPositionDeleteThis_;
};

#endif
