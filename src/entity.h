#ifndef entity_h
#define entity_h

class Entity {
public:
    Entity(int x, int y, int width, int height);
    ~Entity();

    void SetX(int x);
    void SetY(int y);
    void SetWidth(int width);
    void SetHeight(int height);

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
