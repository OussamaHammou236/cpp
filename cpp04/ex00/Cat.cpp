#include "Cat.hpp"

Cat::Cat(void) {type = "Cat"; std::cout << "Cat: the default constructor called" << std::endl; }
Cat:: ~Cat(void) { std::cout << "Cat: the destructor  called" << std::endl; }

Cat:: Cat(Cat &instans)
{
    type = instans.type;
    std::cout << "Cat: the copy constructor called" << std::endl;
}

Cat& Cat::operator=(Cat &instans)
{
    if (this == &instans)
        return *this;
    type = instans.type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "myaw myaw" << std::endl;
}