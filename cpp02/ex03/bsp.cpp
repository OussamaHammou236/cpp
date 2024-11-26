#include "Point.hpp"

Fixed Area_of_triangle(const Point &p1, const Point  &p2, const Point  &p3)
{
    Fixed res;
    Fixed p(0.5f);

    res =   (p1.get_value_of_x() * (p2.get_value_of_y() - p3.get_value_of_y()))
            + (p2.get_value_of_x() * (p3.get_value_of_y() - p1.get_value_of_y()))
            + (p3.get_value_of_x() * (p1.get_value_of_y() - p2.get_value_of_y()));
    if (res.getRawBits() < 0)
        res.setRawBits(-res.getRawBits());
    return (res * p);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    if (!Area_of_triangle(a, c, point).getRawBits() || !Area_of_triangle(a, b, point).getRawBits()
        || !Area_of_triangle(c, b, point).getRawBits())
            return false;
    Fixed res = Area_of_triangle(a, c, point) + Area_of_triangle(a, b, point) + Area_of_triangle(c, b, point);
    return (res == Area_of_triangle(a, b, c));
}
