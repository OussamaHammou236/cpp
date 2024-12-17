#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(NULL);
    AMateria *dwa = src->createMateria("cdre");
    AMateria *telj =  src->createMateria("icde");
    ICharacter *me = new Character("simo");
    ICharacter *you = new Character("ouss");

    me->use(0, *you);
    delete me;
    delete src;
    delete dwa;
    delete telj;
    delete you;
    return 0;
}