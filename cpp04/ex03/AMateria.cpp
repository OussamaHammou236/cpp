#include "AMateria.hpp"

AMateria:: AMateria(std::string const & type)
{
    _type = type;
    std::cout << "AMateria: the name constructor called" << std::endl;
}

AMateria:: AMateria(void)
{
    std::cout << "AMateria: the default constructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
    return _type;
}

AMateria:: AMateria(AMateria &instance)
{
    _type = instance._type;
}


AMateria& AMateria:: operator=(AMateria &instance)
{
    _type = instance._type;
}
// void AMateria:: use(ICharacter& target)
// {

// }

AMateria:: ~AMateria()
{
    std::cout << "the dustractor called" << std::endl;
}