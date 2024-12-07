#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap d1( "tikshbila" );

    d1.attack( "Ohammou-" );
    d1.takeDamage(100);
    d1.beRepaired(200);

    d1.whoAmI();

    d1.highFivesGuys();
    d1.guardGate();

    return 0;
}