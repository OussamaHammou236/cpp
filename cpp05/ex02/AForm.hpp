#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include <ostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    protected:
        const std::string _name;
        const int _GToSigned;
        const int _GToExecute;
        bool _signed;
    public:
        AForm();
        AForm(std::string name, int GToSigned, int GToExecute);
        AForm(const AForm &form);
        AForm &operator=(const AForm &form);
        virtual ~AForm();

        const std::string getName() const;
        int getGToSigned() const;
        int getGToExecute() const;
        bool getSigned() const;
        void beSigned(Bureaucrat &instance);
    
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
                
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what()  const throw();
        };

        virtual void execute(Bureaucrat const & executor) const = 0;
        
};

#endif