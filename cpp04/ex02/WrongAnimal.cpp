#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {type = ""; std::cout << "WrongAnimal: the default constructor called" << std::endl; }
WrongAnimal:: ~WrongAnimal(void) { std::cout << "WrongAnimal: the destructor  called" << std::endl; }

WrongAnimal:: WrongAnimal(std::string str)
{
    type = str;
}

WrongAnimal:: WrongAnimal(WrongAnimal &instans)
{
    type = instans.type;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal &instans)
{
    if (this == &instans)
        return *this;
    type = instans.type;
    return *this;
}

void WrongAnimal:: makeSound() const
{
    std::cout << "WrongAnimal: make Sound call" << std::endl;
}