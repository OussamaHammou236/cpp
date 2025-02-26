#ifndef BUREACRAT_HPP
#define BUREACRAT_HPP

#include <iostream>
#include <exception>
#include <fstream>
#include "Form.hpp"

class Form;

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

        void signForm(Form &form);

        std::string getName();
        int getGrade();

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