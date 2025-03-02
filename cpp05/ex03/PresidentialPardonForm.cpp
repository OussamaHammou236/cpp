#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
    _target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
    _target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &form) : AForm(form)
{
    _target = form._target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &form)
{
    if (this == &form)
        return (*this);
    _target = form._target;
    return (*this);
}

PresidentialPardonForm:: ~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > _GToExecute)
        throw Bureaucrat::GradeTooLowException();
    else
        std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
