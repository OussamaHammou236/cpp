#ifndef SCAVTRAP_H
#define SCAVTRAP_H
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
        ScavTrap(void);
        ~ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(ScavTrap &instens);
        ScavTrap& operator=(ScavTrap &instens);
        void guardGate();
        void attack(std::string& target);
};


#endif