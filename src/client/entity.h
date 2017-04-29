#ifndef entity_h
#define entity_h

#include <SFML/Graphics.hpp>

class Entity {
public:
    virtual void HandleInput(sf::RenderWindow& window) = 0;
    virtual void Update() = 0;
    virtual void Render(sf::RenderWindow& window) = 0;
};

#endif
