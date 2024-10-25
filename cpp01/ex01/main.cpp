#include "Zombie.hpp"

int main()
{
     int i = 0;
    Zombie *zombie;
    zombie =  zombieHorde(5, "dddd");

    while (i < 5)
    {
        zombie[i].announce();
        i++;
    }
    delete[] zombie;
}