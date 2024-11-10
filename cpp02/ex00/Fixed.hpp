#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int FixedPointe;
        static const int fractional;
    public:
        Fixed(void);
        Fixed(Fixed &instens);
        ~Fixed (void);
        void operator=(Fixed &instens);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};


#endif