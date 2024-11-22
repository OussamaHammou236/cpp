#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *newZombie = new(std::nothrow) Zombie;
    if (!newZombie)
        return (NULL);
    newZombie->set(name);
    return (newZombie);
}
