#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include<cmath>

class Fixed
{
    private:
        int FixedPointe;
        static const int fractional;
    public:
        Fixed(const int number);
        Fixed(const float number);
        Fixed(const Fixed& instens);
        Fixed(void);
        ~Fixed(void);
        float toFloat( void ) const;
        int toInt( void ) const;
        friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
        Fixed& operator=(const Fixed &instens);
        bool operator>( const Fixed &instens) const;
        bool operator<( Fixed &instens);
        bool operator<=( Fixed &instens);
        bool operator>=( Fixed &instens);
        bool operator==( Fixed &instens);
        bool operator!=( Fixed &instens);
        float operator+(const Fixed &instens) const;
        float operator*(const Fixed &instens) const;
        float operator-(const Fixed &instens) const;
        float operator/(const Fixed &instens) const;
        Fixed operator++(int);
        Fixed& operator++();
        static float min(const Fixed &obj1, const Fixed &obj2);
        static float max(const Fixed &obj1, const Fixed &obj2);
};


#endif