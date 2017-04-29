#ifndef rectangle_h
#define rectangle_h

#include <SFML/Graphics.hpp>

class Rectangle {
public:
    float X();
    float Y();
    float Width();
    float Height();
    float Left();
    float Right();
    float Top();
    float Bottom();

protected:
    sf::RectangleShape rectangle_;
};

#endif
