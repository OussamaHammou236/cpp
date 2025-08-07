#include "RPN.hpp"

int main(int ac, char **ar)
{
    if (ac != 2)
        return -1;
    RPN obj;
    try
    {
        int res = obj.rpn(ar[1]);
        std::cout << res << std::endl;
    }
    catch(std::string error)
    {
        std::cout << error << std::endl;
    }
}