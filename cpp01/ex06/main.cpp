#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return (1);
    Harla obj;
    obj.complain(av[1]);
}