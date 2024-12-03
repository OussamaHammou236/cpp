#include "ClapTrap.hpp"

ClapTrap:: ClapTrap(void) {}
ClapTrap:: ~ClapTrap(void) {}

ClapTrap:: ClapTrap(std::string name)
{
    _name = name;
    _hit_point = 10;
    _energy_point = 10;
    _attack_damage = 0; 
}

ClapTrap& ClapTrap::operator=(ClapTrap &instens)
{
    _name = instens._name;
    _hit_point = instens._hit_point;
    _energy_point = instens._energy_point;
    _attack_damage = instens._attack_damage;
}

ClapTrap:: ClapTrap(ClapTrap &instens)
{
    _name = instens._name;
    _hit_point = instens._hit_point;
    _energy_point = instens._energy_point;
    _attack_damage = instens._attack_damage;
}
