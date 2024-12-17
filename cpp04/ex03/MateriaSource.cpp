#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource:: ~MateriaSource()
{
    std::cout << "MateriaSource: the dustractor called" << std::endl;
    for (int i = 0; i < 4; i++)
        delete materiaS[i];
}

void MateriaSource:: learnMateria(AMateria *matria)
{
    if (!matria)
        return ;
    for (int i = 0;i < 4; i++)
    {
        if (materiaS[i] == NULL)
        {
            materiaS[i] = matria->clone();
            delete matria;
            return ;
        }

    }
}

AMateria* MateriaSource:: createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (materiaS[i] && materiaS[i]->getType() == type)
            return materiaS[i]->clone();
    }
    return NULL;
}

MateriaSource:: MateriaSource(void)
{
    std::cout << "MateriaSource: the default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        materiaS[i] = NULL;
}

MateriaSource& MateriaSource::operator=(MateriaSource &instance)
{
    std::string type;

    if (this == &instance)
        return *this;
    for (int i = 0; i < 4; i++)
    {
        type = materiaS[i]->getType();
        delete materiaS[i];
        materiaS[i] = instance.createMateria(type);
    }
    return *this;
}

MateriaSource:: MateriaSource(MateriaSource &instance)
{
    *this  = instance;
}