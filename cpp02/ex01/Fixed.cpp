#include "Fixed.hpp"

Fixed:: Fixed(void) {FixedPointe = 0; std::cout << "Default constructor called" << std::endl; }
Fixed:: ~Fixed(void) { std::cout << "Destructor called" << std::endl; }

Fixed:: Fixed(const int number)
{
	FixedPointe = number;
	flag = 0;
	std::cout << "Int constructor called" << std::endl;
}

Fixed:: Fixed(const float number)
{
	FixedPointe =  (int)(roundf(number * (1 << fractional)));
	flag = 1;
	std::cout << "Float constructor called" << std::endl;
}

Fixed:: Fixed(const Fixed& instens)
{
	FixedPointe = instens.FixedPointe;
	flag = instens.flag;
	std::cout << "Copy constructor called" << std::endl;
}

float Fixed:: toFloat( void ) const
{
	if (!flag)
		return (FixedPointe);
	return FixedPointe / (float)(1 << fractional);
}

int Fixed:: toInt( void ) const
{
	if (flag)
		return (toFloat());
	return FixedPointe;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	if (fixed.flag)
		os << fixed.toFloat();
	else
		os << fixed.toInt();
    return os;
}

Fixed& Fixed::operator=(const Fixed &instens)
{
	FixedPointe = instens.FixedPointe;
	flag = instens.flag;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

