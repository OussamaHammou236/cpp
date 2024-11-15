#include "Point.hpp"

float Area_of_triangle(const Point &p1, const Point  &p2, const Point  &p3)
{
    float res;

    res = p1.get_value_of_x().toFloat() * (p2.get_value_of_y().toFloat() - p3.get_value_of_y().toFloat());
    res += p2.get_value_of_x().toFloat() * (p3.get_value_of_y().toFloat() - p1.get_value_of_y().toFloat());
    res += p3.get_value_of_x().toFloat() * (p1.get_value_of_y().toFloat() - p2.get_value_of_y().toFloat());
    if (res < 0)
        res *= -1;
    return (res * 1/2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float res = Area_of_triangle(a, c, point) + Area_of_triangle(a, b, point) + Area_of_triangle(c, b, point);
    return (res == Area_of_triangle(a, b, c));
}

