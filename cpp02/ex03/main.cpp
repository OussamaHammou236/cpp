#include "Point.hpp"

int main()
{
    Point a(0.0f, 0.0f);
    Point b(5.0f, 0.0f);
    Point c(2.5f, 5.0f);
    Point d(2.5f, 0.30f);
    std::cout << bsp(a, b, c, d) << std::endl;
}