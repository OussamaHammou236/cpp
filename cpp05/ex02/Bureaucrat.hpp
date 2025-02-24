#ifndef BUREACRAT_HPP
#define BUREACRAT_HPP

#include <iostream>
#include <exception>
#include <fstream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat &instance);
        Bureaucrat &operator=(Bureaucrat &instance);
        ~Bureaucrat();

        void increment_grade();
        void decrement_grade();

        void signForm(AForm &form);

        std::string getName() const;
        int getGrade() const;

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

std::ostream &operator<<(std::ostream &out, Bureaucrat &instance);

#endif