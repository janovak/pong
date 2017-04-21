#ifndef game_state_h
#define game_state_h

#include <SFML/Graphics.hpp>

#include "entity.h"
#include "state.h"

class GameState : public State {
public:
    GameState(sf::RenderWindow& window);
    ~GameState();

    virtual void HandleInput();
    virtual void Update();
    virtual void Render();

private:
    std::vector<Entity> entity_list_;
    sf::RenderWindow& window_;
};

#endif
