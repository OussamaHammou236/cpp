#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <unistd.h>
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
    private:
        std::string _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &form);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &form);
        ~RobotomyRequestForm();

        void execute(Bureaucrat const & executor) const;
};

#endif