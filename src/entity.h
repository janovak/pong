#ifndef entity_h
#define entity_h

#include <string>

class Entity {
public:
    Entity(const int x, const int y, const int width, const int height);
    ~Entity();

    void SetX(const int x);
    void SetY(const int y);
    void SetWidth(const int width);
    void SetHeight(const int height);

    int GetX();
    int GetY();
    int GetWidth();
    int GetHeight();

private:
    int x_;
    int y_;
    int width_;
    int height_;
};

#endif
