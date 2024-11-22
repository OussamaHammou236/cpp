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

bool Fixed::operator<( Fixed &instens)
{
	return this->FixedPointe < instens.FixedPointe;
}

bool Fixed::operator<=(Fixed &instens)
{
	return this->FixedPointe <= instens.FixedPointe;
}

bool Fixed::operator>=(Fixed &instens)
{
	return this->FixedPointe >= instens.FixedPointe;
}

bool Fixed::operator==(Fixed &instens)
{
	return this->FixedPointe == instens.FixedPointe;
}

bool Fixed::operator!=(Fixed &instens)
{
	return this->FixedPointe != instens.FixedPointe;
}

float Fixed::operator+(const Fixed &instens) const
{
    return toFloat() + instens.toFloat();
}

float Fixed::operator*(const Fixed &instens) const
{
    return toFloat() * instens.toFloat();
}

float Fixed::operator-(const Fixed &instens) const
{
    return toFloat() - instens.toFloat();
}

float Fixed::operator/(const Fixed &instens) const
{
    return toFloat() / instens.toFloat();
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

float Fixed::min(const Fixed &obj1,const Fixed &obj2)
{
	if (obj1.toFloat() < obj2.toFloat())
		return obj1.toFloat();
	return obj2.toFloat();
}

float Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1.toFloat() > obj2.toFloat())
		return obj1.toFloat();
	return obj2.toFloat();
}