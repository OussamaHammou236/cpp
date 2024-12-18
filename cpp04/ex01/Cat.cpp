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
    *this = instans;
    std::cout << "Cat: the copy constructor called" << std::endl;
}

Cat& Cat::operator=(Cat &instans)
{
    if (this == &instans)
        return *this;
    if (test)
        delete test;
    type = instans.type;
    test = new Brain(*instans.test);
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "myaw myaw" << std::endl;
}