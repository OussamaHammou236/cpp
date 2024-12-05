#include "FragTrap.hpp"

FragTrap:: ~FragTrap(void) { std::cout << "FragTrap: the destructor  called" << std::endl; }

FragTrap:: FragTrap(void)
{
    _name = "anonym";
    _hit_point = 100;
    _energy_point = 100;
    _attack_damage = 30;
    std::cout << "FragTrap: the default constructor called" << std::endl; 
}

FragTrap:: FragTrap(std::string name)
{
    _name = name;
    _hit_point = 100;
    _energy_point = 100;
    _attack_damage = 30;
    std::cout << "FragTrap: the name constructor called" << std::endl;
}

FragTrap:: FragTrap(FragTrap &instens)
{
    _name = instens._name;
    _hit_point = instens._hit_point;
    _energy_point = instens._energy_point;
    _attack_damage = instens._attack_damage;
    std::cout << "FragTrap: the copy constructor called" << std::endl;    
}

FragTrap& FragTrap::operator=(FragTrap &instens)
{
    if (this == &instens)
        return (*this);
    _name = instens._name;
    _hit_point = instens._hit_point;
    _energy_point = instens._energy_point;
    _attack_damage = instens._attack_damage;
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << _name << ": high Fives" << std::endl;
}