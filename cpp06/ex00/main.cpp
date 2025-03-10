#include "ScalarConverte.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Error: Invalid number of arguments\n";
        return 1;
    }
    std::string arg = av[1];
    try
    {
        ScalarConverte::convert(arg);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}