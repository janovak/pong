#ifndef paddle_h
#define paddle_h

#include <SFML/Graphics/Color.hpp>

#include "entity.h"
#include "rectangle.h"

class Paddle : public Entity, public Rectangle {
public:
    Paddle(float x, float y);
    ~Paddle();

    void HandleInput(sf::RenderWindow& window) override;
    void Update() override;
    void Render(sf::RenderWindow& window) override;

    static constexpr float PADDLE_WIDTH = 20.f;
    static constexpr float PADDLE_HEIGHT = 50.f;
    static constexpr float HALF_PADDLE_HEIGHT = PADDLE_HEIGHT / 2.f;

private:
    const float x_;
    const sf::Color paddleColor_;
};

#endif
