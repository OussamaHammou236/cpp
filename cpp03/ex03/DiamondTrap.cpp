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

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
    _name = name;
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
    if (this == &obj)
        return *this;
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
        std::cout << "the DiamondTrap have no hit_point" << std::endl;
        return ;
    }
    std::cout << "My DiamondTrap name is " << _name << std::endl;
    std::cout << "The ClapTrap name is " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(std::string target)
{
    ScavTrap::attack(target);
}
