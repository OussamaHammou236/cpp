#include "HumanB.hpp"

HumanB:: HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
}

void HumanB:: attack()
{
    if (!weapon)
        return ;
    std::cout << name << " attacks with their " << weapon->getType() << "\n";
}

void HumanB:: setWeapo(Weapon weapon)
{
    this->weapon = &weapon;
}