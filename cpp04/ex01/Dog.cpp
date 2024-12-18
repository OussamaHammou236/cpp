#include "Dog.hpp"

Dog::Dog(void)
{
    type = "Dog";
    test = new Brain();
    std::cout << "Dog: the default constructor called" << std::endl;
}
Dog:: ~Dog(void)
{
    delete test;
    std::cout << "Dog: the destructor  called" << std::endl;
}

Dog:: Dog(Dog &instans)
{
    *this = instans;
    std::cout << "Dog: the copy constructor called" << std::endl;
}

Dog& Dog::operator=(Dog &instans)
{
    if (this == &instans)
        return *this;
    if (test)
        delete test;
    type = instans.type;
    test = new Brain(*instans.test);
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "haw haw" << std::endl;
}