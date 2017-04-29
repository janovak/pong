#include "ball.h"

Ball::Ball(float x, float y) {
    circle_.setPosition(x, y);
    circle_.setRadius(BALL_RADIUS);
    circle_.setFillColor(sf::Color::White);
    circle_.setOrigin(BALL_RADIUS, BALL_RADIUS);
}

void Ball::HandleInput(sf::RenderWindow& window) {

}

void Ball::Update() {
    circle_.move(velocity_);
    // resolve collisions
}

void Ball::Render(sf::RenderWindow& window) {
    window.draw(circle_);
}
