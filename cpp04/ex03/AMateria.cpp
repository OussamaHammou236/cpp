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
    std::cout << "AMateria: the copy constructor called" << std::endl;
}


AMateria& AMateria:: operator=(AMateria &instance)
{
    if (this == &instance)
        return *this;
    _type = instance._type;
    return *this;
}

void AMateria:: use(ICharacter& target)
{
   std::cout << "the use function called with " + target.getName() << std::endl; 
}

AMateria:: ~AMateria()
{
    std::cout << "AMateria: the dustractor called" << std::endl;
}