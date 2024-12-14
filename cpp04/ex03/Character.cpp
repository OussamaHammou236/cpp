#include "Character.hpp"

std::string const & Character:: getName() const
{
    return _name;
}

void Character:: equip(AMateria* m)
{
    int i = 0;
    while (Materia[i])
        i++;
    if (i >= 4)
        return ;
    Materia[i] = m;
}

void Character:: unequip(int idx)
{
    // don't forget handel the memory leaks ...
    if (idx >= 4)
        return;
    Materia[idx] = NULL; // your forget the address of Materia !  
}

void Character:: use(int idx, ICharacter& target)
{
    if (idx >= 4)
        return;
    Materia[idx]->use(target);
}

Character:: Character(void)
{
    std::cout << "Character: the default constructor called" << std::endl;
}

Character:: Character(std::string name)
{
    _name = name;
    std::cout << "Character: the name constructor called" << std::endl;
}

Character& Character:: operator=(Character &instance)
{
    if (this == &instance)
        return *this;
    _name = instance._name;
    return *this;
}

Character:: Character(Character &instance)
{
    *this = instance;
}

Character:: ~Character(void)
{
    std::cout << "Character: the dustractor called" << std::endl;
}