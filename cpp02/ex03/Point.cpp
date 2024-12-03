#include "Point.hpp"

Point:: Point(void) : x(0), y(0){}
Point:: Point(const float x, const float y): x(x), y(y) {}
Point:: Point(const Point& instens): x(instens.x), y(instens.y){}

const Point& Point::operator=(const Point& instens) const
{
    (void)instens;
    return *this;
}

Point:: ~Point(void) {}

Fixed Point:: get_value_of_x() const { return x; }
Fixed Point:: get_value_of_y() const { return y; }