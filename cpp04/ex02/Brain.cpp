#include "Brain.hpp"

Brain:: Brain(void)
{
    std::cout << "Brain: the default constructor called" << std::endl;
}

Brain& Brain:: operator=(Brain &instans)
{
    if (this == &instans)
        return *this;
    for (int i = 0; i < 100;i++)
        ideas[i] = instans.ideas[i];
    return (*this);
}


Brain:: Brain(Brain &instans)
{
    *this = instans;
}

Brain:: ~Brain(void)
{
    std::cout << "Brain: the destructor  called" << std::endl;
}

