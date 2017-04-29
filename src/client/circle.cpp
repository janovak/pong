#include "circle.h"

float Circle::X() {
    return circle_.getPosition().x;
}

float Circle::Y() {
    return circle_.getPosition().y;
}

float Circle::Radius() {
    return circle_.getRadius();
}

float Circle::Left() {
    return X() - Radius();
}

float Circle::Right() {
    return X() + Radius();
}

float Circle::Top() {
    return Y() - Radius();
}

float Circle::Bottom() {
    return Y() + Radius();
}
