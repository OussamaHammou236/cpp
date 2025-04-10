#include "easyfind.hpp"

int main()
{
    try
    {
        std::vector<int> container = {5, 54, 4};
        easyfind(container, 14);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}