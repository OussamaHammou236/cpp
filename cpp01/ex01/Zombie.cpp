#include "Zombie.hpp"

void Zombie:: set_value(int N, std::string name)
{
    this->N = N;
    this->name = name;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie:: ~Zombie()
{
    std:: cout << "Zombie nb  " << N << "  destroyed\n";
}