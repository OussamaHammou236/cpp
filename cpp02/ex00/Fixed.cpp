#include "Fixed.hpp"

// Fixed:: fractional = 8;

Fixed:: Fixed(void)
{
    FixedPointe = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed:: Fixed(Fixed &instens)
{
    FixedPointe = instens.FixedPointe;
    std::cout << "Copy constructor called" << std::endl;
}

void Fixed:: operator=(Fixed &instens)
{
    FixedPointe = instens.FixedPointe;
    std::cout << "Copy assignment operator calle" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return FixedPointe;
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    FixedPointe = raw;
}

Fixed:: ~Fixed (void)
{
    std::cout << "Destructor called" << std::endl;
}