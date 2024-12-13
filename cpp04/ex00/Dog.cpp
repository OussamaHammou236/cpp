#include "Dog.hpp"

Dog::Dog(void) { type = "Dog"; std::cout << "Dog: the default constructor called" << std::endl; }
Dog:: ~Dog(void) {std::cout << "Dog: the destructor  called" << std::endl; }

Dog:: Dog(Dog &instans)
{
    type = instans.type;
    std::cout << "Dog: the copy constructor called" << std::endl;
}

Dog& Dog::operator=(Dog &instans)
{
    if (this == &instans)
        return *this;
    type = instans.type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "haw haw" << std::endl;
}