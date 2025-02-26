#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat obj("oussama", 2);
        ShrubberyCreationForm form("ShrubberyCreationForm");
        RobotomyRequestForm form1("RobotomyRequestForm");
        PresidentialPardonForm form2("PresidentialPardonForm");
        form.execute(obj);
        form1.execute(obj);
        form2.execute(obj);
        obj.executeForm(form);
        std::cout << obj;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}