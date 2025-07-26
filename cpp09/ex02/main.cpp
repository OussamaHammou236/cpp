#include "PmergeMe.hpp"

int main(int ac, char **av)
{
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