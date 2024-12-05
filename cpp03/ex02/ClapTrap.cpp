#include "ClapTrap.hpp"

ClapTrap:: ~ClapTrap(void) { std::cout << "the destructor  called" << std::endl; }
ClapTrap:: ClapTrap(void)
{
    _name = "anonym";
    _hit_point = 10;
    _energy_point = 10;
    _attack_damage = 0;
    std::cout << "the default constructor called" << std::endl;
}

ClapTrap:: ClapTrap(std::string name)
{
    _name = name;
    _hit_point = 10;
    _energy_point = 10;
    _attack_damage = 0; 
    std::cout << "the name constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap &instens)
{
    if (this == &instens)
        return (*this);
    _name = instens._name;
    _hit_point = instens._hit_point;
    _energy_point = instens._energy_point;
    _attack_damage = instens._attack_damage;
    return (*this);
}

ClapTrap:: ClapTrap(ClapTrap &instens)
{
    _name = instens._name;
    _hit_point = instens._hit_point;
    _energy_point = instens._energy_point;
    _attack_damage = instens._attack_damage;
    std::cout << "the copy constructor called" << std::endl;
}

void ClapTrap:: attack(const std::string& target)
{
    if (_hit_point <= 0 || _energy_point <= 0)
    {
        std::cout << "the Attack refused" << std::endl;
        return ;
    }
    std::cout << "ClapTrap "<< _name 
              << " attacks " << target << ", causing " << _attack_damage 
              << " points of damage!" << std::endl;
    _energy_point--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hit_point - amount < 0)
    {
        std::cout << "the operation refused because he not have a hit point" << std::endl;
        return ;
    }
    _hit_point -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!_energy_point)
    {
        std::cout << "the Attack refused" << std::endl;
        return ;
    }
    _hit_point += amount;
    _energy_point--;
}