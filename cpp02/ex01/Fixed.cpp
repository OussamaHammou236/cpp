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
	FixedPointe = instens.FixedPointe;
	std::cout << "Copy constructor called" << std::endl;
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
	FixedPointe = instens.FixedPointe;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

