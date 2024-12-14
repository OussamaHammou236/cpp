#include "Cure.hpp"

Cure:: Cure(std::string type)
{
    _type = type;
    std::cout << "Cure: the name constructor called" << std::endl;
}

Cure:: Cure(void)
{
    _type = "cure";
    std::cout << "Cure: the default constructor called" << std::endl;
}

AMateria* Cure:: clone() const
{
    Cure *obj = new Cure();
    return obj;
}

void Cure:: use(ICharacter& target)
{
    std::cout << "* heals " + target.getName() +"’s wounds *" << std::endl;
}

Cure:: ~Cure()
{
    std::cout << "Cure: the dustractor called" << std::endl;
}

Cure:: Cure(Cure &instance)
{
    *this = instance;
}

Cure& Cure::operator=(Cure &instance)
{
    if (this == &instance)
        return *this;
    _type = instance._type;
    return *this;
}