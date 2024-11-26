#include "Fixed.hpp"

const int Fixed:: fractional = 8;

Fixed:: Fixed(void) {FixedPointe = 0;}
Fixed:: ~Fixed(void) {}

Fixed:: Fixed(const int number)
{
	FixedPointe = number << fractional;
}

Fixed:: Fixed(const float number)
{
	FixedPointe =  (int)(roundf(number * (1 << fractional)));
}

Fixed:: Fixed(const Fixed& instens)
{
	FixedPointe = instens.FixedPointe;
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
	return (*this);
}

bool Fixed::operator>(const Fixed &instens) const
{
	return this->FixedPointe > instens.FixedPointe;
}

bool Fixed::operator<(const Fixed &instens) const
{
	return this->FixedPointe < instens.FixedPointe;
}

bool Fixed::operator<=(const Fixed &instens) const
{
	return this->FixedPointe <= instens.FixedPointe;
}

bool Fixed::operator>=(const Fixed &instens) const
{
	return this->FixedPointe >= instens.FixedPointe;
}

bool Fixed::operator==(const Fixed &instens) const
{
	return this->FixedPointe == instens.FixedPointe;
}

bool Fixed::operator!=(const Fixed &instens) const
{
	return this->FixedPointe != instens.FixedPointe;
}

Fixed Fixed::operator+(const Fixed &instens) const
{
	Fixed obj;

	obj.FixedPointe = FixedPointe + instens.FixedPointe;
    return (obj);
}

Fixed Fixed::operator*(const Fixed &instens) const
{
	Fixed obj;

	obj.FixedPointe = (FixedPointe * instens.FixedPointe) / (1 << fractional);
	return (obj);
}

Fixed Fixed::operator-(const Fixed &instens) const
{
	Fixed obj;

	obj.FixedPointe = FixedPointe - instens.FixedPointe;
    return (obj);
}

Fixed Fixed::operator/(const Fixed &instens) const
{
    Fixed obj;

	obj.FixedPointe = (FixedPointe * 256) / instens.FixedPointe;
	return (obj);
}

Fixed& Fixed::operator++()
{
	FixedPointe++;
	return (*this);
}

Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    FixedPointe++;
    return temp;
}

Fixed &Fixed::min(Fixed &obj1, Fixed &obj2)
{
	if (obj1 < obj2)
		return obj1;
	return obj2;
}

Fixed &Fixed::max(Fixed &obj1, Fixed &obj2)
{
	if (obj1 > obj2)
		return obj1;
	return obj2;
}

const Fixed& Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1 < obj2)
		return obj1;
	return obj2;
}

const Fixed& Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1 > obj2)
		return obj1;
	return obj2;
}

int Fixed::getRawBits( void ) const
{
    return FixedPointe;
}

void Fixed::setRawBits( int const raw )
{
    FixedPointe = raw;
}