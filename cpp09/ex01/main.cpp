#include "RPN.hpp"

int main(int ac, char **ar)
{
    if (ac != 2)
        return -1;
    RPN obj;
    try
    {
        obj.rpn(ar[1]);
    }
    catch(std::string error)
    {
        std::cout << error << std::endl;
    }
}