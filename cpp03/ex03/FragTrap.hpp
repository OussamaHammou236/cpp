#ifndef FLAG_TRAP_H
#define FLAG_TRAP_H
#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap(void);
        ~FragTrap(void); 
        FragTrap(std::string name);
        FragTrap(FragTrap &instens);
        FragTrap& operator=(FragTrap &instens);
        void highFivesGuys(void);
};

#endif