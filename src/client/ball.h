#ifndef ball_h
#define ball_h

#include <SFML/Graphics/Color.hpp>

#include "entity.h"
#include "circle.h"

class Ball : public Entity, public Circle {
    Ball(float x, float y);

    void HandleInput(sf::RenderWindow& window) override;
    void Update() override;
    void Render(sf::RenderWindow& window) override;

private:
    sf::Vector2f velocity_;
    static constexpr float BALL_RADIUS = 10.f;
};

#endif
