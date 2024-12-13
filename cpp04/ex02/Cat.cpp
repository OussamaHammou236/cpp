#include "Cat.hpp"

Cat::Cat(void)
{
    type = "Cat";
    test = new Brain();
    std::cout << "Cat: the default constructor called" << std::endl;
}
Cat:: ~Cat(void)
{
    std::cout << "Cat: the destructor  called" << std::endl;
    delete test;
}

Cat:: Cat(Cat &instans)
{
    type = instans.type;
    test = instans.test;
    std::cout << "Cat: the copy constructor called" << std::endl;
}

Cat& Cat::operator=(Cat &instans)
{
    if (this == &instans)
        return *this;
    type = instans.type;
    test = instans.test;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "myaw myaw" << std::endl;
}

std::string Cat::getType() const
{
    return type;
}