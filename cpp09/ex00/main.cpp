#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error: could not open file." << std::endl;
        return 1;
    }
    try
    {
       BitcoinExchange:: ReadDataBase();
       BitcoinExchange:: ReadInputFile(av[1]);
    }
    catch(char const *str)
    {
        std::cerr << str << '\n';
    }
}