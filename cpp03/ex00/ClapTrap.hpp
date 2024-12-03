#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        int _hit_point;
        int _energy_point;
        int _attack_damage;
    public:
        ClapTrap(void);
        ClapTrap(std::string name);
        ~ClapTrap(void);
        ClapTrap(ClapTrap &instens);
        ClapTrap &operator=(ClapTrap &instens);
};

#endif