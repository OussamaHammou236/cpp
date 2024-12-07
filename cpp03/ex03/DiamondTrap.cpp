#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    _name = ClapTrap::_name;
    ClapTrap::_name = _name + "_clap_name";
    _hit_point = FragTrap::_hit_point;
    _energy_point = ScavTrap::_energy_point;
    _attack_damage = FragTrap::_attack_damage;
    std::cout << "DiamondTrap: the default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
    _name = name;
    ClapTrap::_name = _name + "_clap_name";
    _hit_point = FragTrap::_hit_point;
    _energy_point = ScavTrap::_energy_point;
    _attack_damage = FragTrap::_attack_damage;
    std::cout << "DiamondTrap: the name constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &obj)
{
    _name = obj._name;
    ClapTrap::_name = obj._name + "_clap_name";
    _hit_point = obj._hit_point;
    _energy_point = obj._energy_point;
    _attack_damage = obj._attack_damage;
    std::cout << "DiamondTrap: the copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap &obj)
{
    _name = obj._name;
    ClapTrap::_name = obj._name + "_clap_name";
    _hit_point = obj._hit_point;
    _energy_point = obj._energy_point;
    _attack_damage = obj._attack_damage;
    return (*this);
}

DiamondTrap:: ~DiamondTrap(void)
{
    std::cout << "DiamondTrap: the destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
    if (_hit_point <= 0)
    {
        std::cout << "the DiamondTrap not have hit_point" << std::endl;
        return ;
    }
    std::cout << "the DiamondTrap name is " << _name << std::endl;
}

void DiamondTrap::attack(std::string &target)
{
    ScavTrap::attack(target);
}