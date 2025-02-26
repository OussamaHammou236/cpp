#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &intern)
{
    *this = intern;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(const Intern &intern)
{
    (void)intern;
    return (*this);
}

AForm *Presidential_clone(std::string target)
{
    return (new PresidentialPardonForm(target));
}

AForm *Robotomy_clone(std::string target)
{
    return (new RobotomyRequestForm(target));
}

AForm *Shrubbery_clone(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

AForm *Intern:: makeForm(std::string formName, std::string target)
{
    AForm *form;
    int comp[] = {formName.compare("PresidentialPardonForm"), formName.compare("RobotomyRequestForm"), formName.compare("ShrubberyCreationForm")};
    AForm *(*clone[])(std::string) = {Presidential_clone, Robotomy_clone, Shrubbery_clone};
    int i = 0;
    while(i < 3)
    {
        if (comp[i] == 0)
        {
            form = clone[i](target);
            std::cout << "Intern creates " << formName << std::endl;
            return (form);
        }
        i++;
    }
    std::cout << "Intern cannot create " << formName << std::endl;
    return (NULL);
}