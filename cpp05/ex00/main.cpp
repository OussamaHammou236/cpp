#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat obj1("oussama", 0);
        std::cout << obj1;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}