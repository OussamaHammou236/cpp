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
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed& operator=(const Fixed &instens);
};


std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif