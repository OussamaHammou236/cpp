#include "WrongCat.hpp"

WrongCat::WrongCat(void) {type = "WrongCat"; std::cout << "WrongCat: the default constructor called" << std::endl; }
WrongCat:: ~WrongCat(void) { std::cout << "WrongCat: the destructor  called" << std::endl; }

WrongCat:: WrongCat(WrongCat &instans)
{
    type = instans.type;
    std::cout << "WrongCat: the copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat &instans)
{
    if (this == &instans)
        return *this;
    type = instans.type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "myaw myaw" << std::endl;
}