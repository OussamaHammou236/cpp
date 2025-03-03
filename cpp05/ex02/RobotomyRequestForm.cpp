#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
    _target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
    _target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form) : AForm(form)
{
    _target = form._target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &form)
{
    if (this == &form)
        return (*this);
    _target = form._target;
    return (*this);
}

RobotomyRequestForm:: ~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > 45)
        throw GradeTooLowException();
    std::cout << "Zzzzzzzzzzzzz..." << std::endl;
    srand(time(NULL));
    int random = rand() % 2;
    if (random == 0)
        std::cout << _target << " has been robotomized successfully" << std::endl;
    else
        std::cout << _target << " has been failed to robotomized" << std::endl;
}
