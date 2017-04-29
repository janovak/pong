#ifndef game_state_h
#define game_state_h

#include <algorithm>

#include <SFML/Graphics.hpp>

#include "connection.h"
#include "entity.h"
#include "state.h"

class GameState : public State {
public:
    GameState(Connection& connection);
    
    virtual void HandleInput(sf::RenderWindow& window) override;
    virtual void Update() override;
    virtual void Render(sf::RenderWindow& window) override;

private:
    std::vector<std::unique_ptr<Entity>> entityList_;
    Connection& connection_;
};

#endif
