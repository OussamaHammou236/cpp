#include "Fixed.hpp"

const int Fixed:: fractional = 8;

Fixed:: Fixed(void)
{
    FixedPointe = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed:: Fixed(Fixed &instens)
{
    std::cout << "Copy constructor called" << std::endl;
    FixedPointe = instens.getRawBits();
}

Fixed& Fixed:: operator=(Fixed &instens)
{
    std::cout << "Copy assignment operator calle" << std::endl;
    FixedPointe = instens.getRawBits();
    return (*this);
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