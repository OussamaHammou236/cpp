#include "ScavTrap.hpp"

ScavTrap:: ScavTrap(void)
{
    _name = "anonym";
    _hit_point = 100;
    _energy_point = 50;
    _attack_damage = 20;
    std::cout << "ScavTrap: the default constructor called" << std::endl;
}

ScavTrap:: ScavTrap(std::string name)
{
    _name = name;
    _hit_point = 100;
    _energy_point = 50;
    _attack_damage = 20;
    std::cout << "ScavTrap: the name constructor called" << std::endl;   
}

ScavTrap:: ScavTrap(ScavTrap &instens)
{
    _name = instens._name;
    _hit_point = instens._hit_point;
    _energy_point = instens._energy_point;
    _attack_damage = instens._attack_damage;
    std::cout << "ScavTrap: the copy constructor called" << std::endl;
}

ScavTrap& ScavTrap:: operator=(ScavTrap &instens)
{
    if (this == &instens)
        return (*this);
    _name = instens._name;
    _hit_point = instens._hit_point;
    _energy_point = instens._energy_point;
    _attack_damage = instens._attack_damage;
    return (*this);
}

ScavTrap:: ~ScavTrap(void)
{
    std::cout << "ScavTrap: the destructor  called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "the ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap:: attack(std::string& target)
{
    if (!_hit_point || !_energy_point)
    {
        std::cout << "ScavTrap:: the Attack refused" << std::endl;
        return ;
    }
    std::cout << "ScavTrap "<< _name 
              << " attacks " << target << ", causing " << _attack_damage 
              << " points of damage!" << std::endl;
    _energy_point--;
}