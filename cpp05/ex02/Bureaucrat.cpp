#include "Bureaucrat.hpp"

Bureaucrat:: Bureaucrat() : _name("default")
{
    _grade = 1;
}

Bureaucrat:: Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade < 1)
        throw GradeTooLowException();
    else if (grade > 150)
       throw GradeTooHighException();
    else
        _grade = grade;
}

Bureaucrat:: Bureaucrat(Bureaucrat &instance) : _name(instance.getName())
{
    *this = instance;
}

Bureaucrat &Bureaucrat:: operator=(Bureaucrat &instance)
{
    if (this == &instance)
        return (*this);
    if (instance._grade < 1)
       throw GradeTooHighException();
    else if (instance._grade > 150)
        throw GradeTooLowException();
    else
        _grade = instance.getGrade();
    return (*this);
}

Bureaucrat:: ~Bureaucrat()
{

}

const char* Bureaucrat:: GradeTooHighException:: what()  const throw()
{
    const char *err = "invalid grad: is it too High";
    return (err); 
}

const char* Bureaucrat:: GradeTooLowException:: what()  const throw()
{
    const char *err = "invalid grad: is it too Low";
    return (err); 
}

void Bureaucrat:: increment_grade()
{
    if (_grade < 2)
        throw GradeTooHighException();
    _grade--;
}

void Bureaucrat:: decrement_grade()
{
    if (_grade + 1 > 150)
        throw GradeTooLowException();
    _grade++;
}

std::string Bureaucrat:: getName() const
{
    return (_name);
}

int Bureaucrat::getGrade() const
{
    return (_grade);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &instance)
{
    out << instance.getName() <<", bureaucrat grade " << instance.getGrade() << std::endl;
    return out;
} 

void Bureaucrat::signForm(AForm &form)
{
    if (form.getGToSigned() >= _grade)
        std::cout << _name << " signs " << form.getName() << std::endl;
    else
        std::cout << _name << " couldn’t sign < " << form.getName() << " because not have enough grade" << std::endl;
}

void Bureaucrat:: executeForm(AForm const & form)
{
    if (form.getGToExecute() >= _grade)
        std::cout << _name << " executes " << form.getName() << std::endl;
    else
        std::cout << _name << " couldn’t execute " << form.getName() << " because not have enough grade" << std::endl;
}