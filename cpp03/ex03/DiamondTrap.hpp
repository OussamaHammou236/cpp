#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string _name;
    public:
        DiamondTrap(void);
        ~DiamondTrap(void);
        DiamondTrap(DiamondTrap &obj);
        DiamondTrap &operator=(DiamondTrap &obj);

        DiamondTrap(std::string name);

        void whoAmI();
        void attack(std::string target);
};

#endif