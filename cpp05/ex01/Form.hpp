#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include <ostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string _name;
        const int _GToSigned;
        const int _GToExecute;
        bool _signed;
    public:
        Form();
        Form(std::string name, int GToSigned, int GToExecute);
        Form(const Form &form);
        Form &operator=(const Form &form);
        ~Form();

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
        
};

#endif