#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie new_zombei;

    new_zombei.set(name);
    new_zombei.announce();
}