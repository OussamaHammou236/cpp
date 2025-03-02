#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        Bureaucrat obj("oussama", 2);
        Intern intern;
        AForm *form = intern.makeForm("ShrubberyCreationForm", "home");
        AForm *form1 = intern.makeForm("RobotomyRequestForm", "home");
        AForm *form2 = intern.makeForm("PresidentialPardonForm", "home");

        obj.signForm(*form);
        obj.signForm(*form1);
        obj.signForm(*form2);

        obj.executeForm(*form);
        obj.executeForm(*form1);
        obj.executeForm(*form2);

        form->execute(obj);
        form1->execute(obj);
        form2->execute(obj);

        obj.executeForm(*form);
        std::cout << obj;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(const char *e)
    {
        std::cerr << e << '\n';
    }
    return 0;
    
}