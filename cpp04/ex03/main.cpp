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
    // src->learnMateria(new Cure());
    // ICharacter* me = new Character("me");
    // AMateria* tmp;
    // tmp = src->createMateria("ice");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // ICharacter* bob = new Character("bob");
    // me->use(0, *bob);
    // me->use(1, *bob);
    // delete bob;
    // delete me;
    // delete src;
    AMateria *tmp;
    tmp = src->createMateria("ice");
    ICharacter* me = new Character("me");
    me->equip(tmp);
    me->unequip(0);     
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    // me->unequip(0);
    // me->unequip(2);
    // tmp = src->createMateria("ice");
    me->equip(tmp);
    // me->unequip(2);

    delete src;
    delete me;
    return 0;
}