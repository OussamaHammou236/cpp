#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource:: ~MateriaSource()
{
    std::cout << "MateriaSource: the dustractor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria *matria)
{
    int i = 0;
    while (materiaS[i])
        i++;
    std::cout << "gg\n";
    if (i >= 4)
        return;
    materiaS[i] = matria;
}

AMateria* MateriaSource:: createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (materiaS[i]->getType() == type)
        {
            return materiaS[i]->clone();
        }
    }
    return NULL;
}