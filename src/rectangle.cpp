#include "rectangle.h"

float Rectangle::X() {
    return rectangle_.getPosition().x;
}

float Rectangle::Y() {
    return rectangle_.getPosition().y;
}

float Rectangle::Width() {
    return rectangle_.getSize().x;
}

float Rectangle::Height() {
    return rectangle_.getSize().y;
}

float Rectangle::Left() {
    return X() - Width() / 2.f;
}

float Rectangle::Right() {
    return X() + Width() / 2.f;
}

float Rectangle::Top() {
    return Y() - Height() / 2.f;
}

float Rectangle::Bottom() {
    return Y() + Height() / 2.f;
}
