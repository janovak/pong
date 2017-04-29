#ifndef circle_h
#define circle_h

#include <SFML/Graphics.hpp>

class Circle {
public:
    float X();
    float Y();
    float Radius();
    float Left();
    float Right();
    float Top();
    float Bottom();

protected:
    sf::CircleShape circle_;
};

#endif
