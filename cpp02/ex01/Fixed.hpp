#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include<cmath>

class Fixed
{
    private:
        int FixedPointe;
        int flag;
        static const int fractional = 8;
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
};


#endif