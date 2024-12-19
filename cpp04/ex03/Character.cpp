#include "Character.hpp"

Garbage *Character::gc;
Garbage *Character::_tmp;
int  Character::cont = 0;


std::string const & Character:: getName() const
{
    return _name;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (Materia[i] == m)
            return;
    }
    for (int i = 0; i < 4; i++)
    {
        if (Materia[i] == NULL)
        {
            Materia[i] = m;
            return;
        }
    }
}


bool check_list(Garbage *list, AMateria *adr)
{

    while (list)
    {
        if (adr == list->adr)
            return false;
        list = list->next;
    }
    return true;
}

bool check_materia(Garbage **tmp, AMateria *adr)
{
    Garbage *list = *tmp;

    while (list)
    {
        if (adr == list->adr)
        {
            list->adr = NULL;
            return false;
        }
        list = list->next;
    }
    return true;
}



void Character:: unequip(int idx)
{
    // don't forget handel the memory leaks ...
    if (idx >= 4 || idx < 0 ||!Materia[idx])
        return;
    if (!gc)
    {
        gc = new Garbage(Materia[idx]);
        _tmp = gc;
    }
    else if (check_list(_tmp, Materia[idx]))
    {
        gc->next = new Garbage(Materia[idx]);
        gc = gc->next;
    }
    Materia[idx] = NULL; // your forget the address of Materia !  
}

void Character:: use(int idx, ICharacter& target)
{
    if (idx >= 4 || idx < 0 || !Materia[idx])
        return;
    Materia[idx]->use(target);
}

Character:: Character(void)
{
    std::cout << "Character: the default constructor called" << std::endl;
    cont++;
    for (int i = 0; i < 4; i++)
        Materia[i] = NULL;
}

Character:: Character(std::string name)
{
    _name = name;
    cont++;
    for (int i = 0; i < 4; i++)
        Materia[i] = NULL;
    std::cout << "Character: the name constructor called" << std::endl;
}

Character& Character:: operator=(Character &instance)
{
    if (this == &instance)
        return *this;
    _name = instance._name;
    for (int i = 0; i < 4; i++)
    {
        check_materia(&_tmp,  Materia[i]);
        delete Materia[i];
        Materia[i] = instance.Materia[i];
    }
    return *this;
}

Character:: Character(Character &instance)
{
    *this = instance;
    cont++;
}

Character:: ~Character(void)
{
    std::cout << "Character: the dustractor called" << std::endl;
    cont--;
    for (int i = 0; i <= 3; i++)
    {
        check_materia(&_tmp,  Materia[i]);
        delete Materia[i];
    }

    if (cont <= 0)
        cleanUp();
}

void Character:: cleanUp()
{
    Garbage *tmp;
    while (_tmp)
    {
        tmp = _tmp;
        _tmp = _tmp->next;
        delete tmp;
    }
}