#include "Fixed.hpp"

const int Fixed:: fractional = 8;

Fixed:: Fixed(void) {FixedPointe = 0; std::cout << "Default constructor called" << std::endl; }
Fixed:: ~Fixed(void) { std::cout << "Destructor called" << std::endl; }

Fixed:: Fixed(const int number)
{
	FixedPointe = number << fractional;
	std::cout << "Int constructor called" << std::endl;
}

Fixed:: Fixed(const float number)
{
	FixedPointe =  (int)(roundf(number * (1 << fractional)));
	std::cout << "Float constructor called" << std::endl;
}

Fixed:: Fixed(const Fixed& instens)
{
	std::cout << "Copy constructor called" << std::endl;
	// FixedPointe = instens.FixedPointe;
	*this = instens;
}

float Fixed:: toFloat( void ) const
{
	return FixedPointe / (float)(1 << fractional);
}

int Fixed:: toInt( void ) const
{
	return FixedPointe >> fractional;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
    return os;
}

Fixed& Fixed::operator=(const Fixed &instens)
{
	std::cout << "Copy assignment operator called" << std::endl;
	FixedPointe = instens.FixedPointe;
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