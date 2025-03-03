#include "Form.hpp"

Form::Form() : _name("default"), _GToSigned(1), _GToExecute(1), _signed(false)
{
}
Form::Form(std::string name, int GToSigned, int GToExecute) : _name(name), _GToSigned(GToSigned), _GToExecute(GToExecute), _signed(false)
{
    if (GToSigned < 1 || GToExecute < 1)
        throw GradeTooHighException();
    if (GToSigned > 150 || GToExecute > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &form) : _name(form._name), _GToSigned(form._GToSigned), _GToExecute(form._GToExecute), _signed(form._signed)
{
}

Form &Form::operator=(const Form &form)
{
    if (this == &form)
        return *this;
    _signed = form._signed;
    return *this;
}

Form::~Form()
{
}

const char* Form:: GradeTooHighException:: what()  const throw()
{
    const char *err = "invalid grad: is it too High";
    return (err);
}

const char* Form:: GradeTooLowException:: what()  const throw()
{
    const char *err = "invalid grad: is it too Low";
    return (err); 
}

const std::string Form::getName() const
{
    return _name;
}

int Form::getGToSigned() const
{
    return _GToSigned;
}

int Form::getGToExecute() const
{
    return _GToExecute;
}

bool Form::getSigned() const
{
    return _signed;
}

void Form::beSigned(Bureaucrat &instance)
{
    if (instance.getGrade() > _GToSigned)
        throw Form::GradeTooLowException();
    _signed = true;
}

std::ostream &operator<<(std::ostream &out, Form &instance)
{
    out << "Form name: " << instance.getName() << std::endl;
    out << "Grade to sign: " << instance.getGToSigned() << std::endl;
    out << "Grade to execute: " << instance.getGToExecute() << std::endl;
    out << "Is signed: " << instance.getSigned() << std::endl;
    return out;
}