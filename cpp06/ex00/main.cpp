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
        if (arg.length() > 1 && isValid(arg[0]))
        {
            ScalarConverte::ParseInput(arg);
            ScalarConverte::handle_number(atof(arg.c_str()));
        }
        else 
            ScalarConverte::handle_char(arg[0]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}