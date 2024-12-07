#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string _name;
    public:
        DiamondTrap(void);
        ~DiamondTrap(void);
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap &obj);
        DiamondTrap &operator=(DiamondTrap &obj);
        void whoAmI();
        void attack(std::string &target);
};

#endif