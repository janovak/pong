#ifndef state_h
#define state_h

#include <SFML/Graphics.hpp>

class State {
public:
    virtual void HandleInput(sf::RenderWindow& window) = 0;
    virtual void Update() = 0;
    virtual void Render(sf::RenderWindow& window) = 0;
};

#endif
