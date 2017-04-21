#include "entity.h"

Entity::Entity(const int x, const int y, const int width, const int height)
    : x_(x),
      y_(y),
      width_(width),
      height_(height) {

}

Entity::~Entity() {
}

void Entity::SetX(const int x) {
    x_ = x;
}

void Entity::SetY(const int y) {
    y_ = y;
}

void Entity::SetWidth(const int width) {
    width_ = width;
}

void Entity::SetHeight(const int height) {
    height_ = height;
}

int Entity::Entity::GetX() {
    return x_;
}

int Entity::GetY() {
    return y_;
}

int Entity::GetWidth() {
    return width_;
}

int Entity::GetHeight() {
    return height_;
}
