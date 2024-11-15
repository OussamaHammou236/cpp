#include "Point.hpp"

Point:: Point(void) : x(0), y(0){}
Point:: Point(float x, float y): x(x), y(y) {}
Point:: Point(Point& instens): x(instens.x), y(instens.y){}

Point& Point::operator=(Point& instens)
{
    if (this == &instens)
        return *this;
    return instens;
}

Point:: ~Point(void) {}

Fixed Point:: get_value_of_x() const { return x; }
Fixed Point:: get_value_of_y() const { return y; }