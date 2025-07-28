#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac < 2)
        return 0;
    try
    {
        PmergeMe obj;

        obj.ParsInput(av);
        obj.SortFirstContainer();
        obj.SortSecondContainer();
    }
    catch(std::string error)
    {
        std::cout << error << std::endl;
    }
    
}