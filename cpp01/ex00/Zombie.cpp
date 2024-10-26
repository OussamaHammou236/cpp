#include "Zombie.hpp"

void Zombie::set(std::string name)
{
    this->name = name;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie:: ~Zombie()
{
    std::cout << name << " destroyed\n"; 
}