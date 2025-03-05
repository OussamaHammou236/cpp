#include "ScalarConverte.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Error: Invalid number of arguments\n";
        return 1;
    }
    try
    {
        // if ()
            ScalarConverte::ParseInput(av[1]);
        // else 
            // hand_char();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    float f = .5f;
    std::cout << f << std::endl;
}