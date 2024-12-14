#include "Ice.hpp"

Ice:: Ice(std::string type)
{
    _type = type;
    std::cout << "Ice: the name constructor called" << std::endl;
}

Ice:: Ice(void)
{
    std::cout << "Ice: the default constructor called" << std::endl;
}

AMateria* Ice:: clone() const
{
    Ice *obj = new Ice();
    return obj;
}

Ice:: ~Ice()
{
    std::cout << "Ice: the dustractor called" << std::endl;
}

void Ice:: use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}

Ice:: Ice(Ice &instance)
{
    *this = instance;
}

Ice& Ice::operator=(Ice &instance)
{
    if (this == &instance)
        return *this;
    _type = instance._type;
    return *this;
}