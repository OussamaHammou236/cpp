#include "Animal.hpp"

Animal::Animal(void) {type = ""; std::cout << "Animal: the default constructor called" << std::endl; }
Animal:: ~Animal(void) { std::cout << "Animal: the destructor  called" << std::endl; }

Animal:: Animal(std::string str)
{
    type = str;
}

Animal:: Animal(Animal &instans)
{
    type = instans.type;
}

Animal& Animal::operator=(Animal &instans)
{
    if (this == &instans)
        return *this;
    type = instans.type;
    return *this;
}

void Animal:: makeSound() const
{
    std::cout << "Animal: make Sound call" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}