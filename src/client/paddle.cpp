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

void Paddle::HandleInput(sf::RenderWindow& window) {
    int mouseY = sf::Mouse::getPosition(window).y;
    if (mouseY < HALF_PADDLE_HEIGHT) {
        mouseY = HALF_PADDLE_HEIGHT;
    } else if (mouseY > window.getSize().y - HALF_PADDLE_HEIGHT) {
        mouseY = window.getSize().y - HALF_PADDLE_HEIGHT;
    }
    rectangle_.setPosition(x_, mouseY);
}

void Paddle::Update() {

}

void Paddle::Render(sf::RenderWindow& window) {
    window.draw(rectangle_);
}
