#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat obj("oussama", 2);
        ShrubberyCreationForm form("home", 5, 32);
        form.execute(obj);
        std::cout << obj;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}