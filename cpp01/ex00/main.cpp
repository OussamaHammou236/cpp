#include "Zombie.hpp"

int main()
{
	Zombie *zombie;
	zombie = newZombie("oussama");
	zombie->announce();
	randomChump("Amine");
	delete zombie;
   
}