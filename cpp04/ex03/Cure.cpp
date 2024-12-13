#include "Cure.hpp"

Cure:: Cure(std::string type)
{
    _type = type;
}

Cure:: Cure(void)
{

}

AMateria* Cure:: clone() const
{
    Cure *obj = new Cure();
    return obj;
}
