#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string _target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &form);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &form);
        ~PresidentialPardonForm();

        void execute(Bureaucrat const & executor) const;
};

#endif