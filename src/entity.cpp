#include "entity.h"

Entity::Entity(int x, int y, int width, int height)
    : x_(x),
      y_(y),
      width_(width),
      height_(height) {

}

Entity::~Entity() {
    
}

void Entity::SetX(int x) {
    x_ = x;
}

void Entity::SetY(int y) {
    y_ = y;
}

void Entity::SetWidth(int width) {
    width_ = width;
}

void Entity::SetHeight(int height) {
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
