#include "HumanB.hpp"

HumanB:: HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
}

void HumanB:: attack()
{
    if (!weapon)
    {
        std::cout << name << " attacks with their " << "\n";
        return ;
    }
    std::cout << name << " attacks with their " << weapon->getType() << "\n";
}

void HumanB:: setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}