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
        int getRawBits( void ) const;
        void setRawBits( int const raw );

        Fixed& operator=(const Fixed &instens);

        bool operator>( const Fixed &instens) const;
        bool operator<( const Fixed &instens) const ;
        bool operator<=( const Fixed &instens) const;
        bool operator>=( const Fixed &instens) const;
        bool operator==( const Fixed &instens) const;
        bool operator!=( const Fixed &instens) const;

        Fixed operator+(const Fixed &instens) const;
        Fixed operator*(const Fixed &instens) const;
        Fixed operator-(const Fixed &instens) const;
        Fixed operator/(const Fixed &instens) const;

        Fixed operator++(int);
        Fixed& operator++();
        Fixed operator--(int);
        Fixed& operator--();

        static  Fixed& min( Fixed &obj1,  Fixed &obj2);
        static Fixed& max( Fixed &obj1,  Fixed &obj2);
        static const Fixed& min(const Fixed &obj1, const Fixed &obj2);
        static const Fixed& max(const Fixed &obj1, const Fixed &obj2);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif