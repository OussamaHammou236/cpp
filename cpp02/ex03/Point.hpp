#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp" 

class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point(void);
        Point(float x, float y);
        Point(Point& instens);
        Point& operator=(Point& instens);
        ~Point(void);
        Fixed get_value_of_x() const;
        Fixed get_value_of_y() const;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif