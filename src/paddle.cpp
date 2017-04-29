#include "paddle.h"

#include <iostream>

Paddle::Paddle(float x, float y)
    : x_(x),
      paddleColor_(sf::Color::White) {
    rectangle_.setPosition(x, y);
    rectangle_.setSize({PADDLE_WIDTH, PADDLE_HEIGHT});
    rectangle_.setFillColor(paddleColor_);
    rectangle_.setOrigin(PADDLE_WIDTH / 2.f, PADDLE_HEIGHT / 2.f);
}

Paddle::~Paddle() {

}

void Paddle::HandleInput(sf::RenderWindow& window) {
    rectangle_.setPosition(x_ + rectangle_.getOrigin().x, sf::Mouse::getPosition(window).y);
}

void Paddle::Update() {

}

void Paddle::Render(sf::RenderWindow& window) {
    window.draw(rectangle_);
}
