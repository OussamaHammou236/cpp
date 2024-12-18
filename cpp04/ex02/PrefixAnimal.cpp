#include "PrefixAnimal.hpp"

PrefixAnimal::PrefixAnimal(void) {type = ""; std::cout << "PrefixAnimal: the default constructor called" << std::endl; }
PrefixAnimal:: ~PrefixAnimal(void) {std::cout << "PrefixAnimal: the destructor  called" << std::endl; }

PrefixAnimal:: PrefixAnimal(std::string str)
{
    type = str;
}

PrefixAnimal:: PrefixAnimal(PrefixAnimal &instans)
{
    type = instans.type;
}

PrefixAnimal& PrefixAnimal::operator=(PrefixAnimal &instans)
{
    if (this == &instans)
        return *this;
    type = instans.type;
    return *this;
}
