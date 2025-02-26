#include "AForm.hpp"

AForm::AForm() : _name("default"), _GToSigned(1), _GToExecute(1), _signed(false)
{
}
AForm::AForm(std::string name, int GToSigned, int GToExecute) : _name(name), _GToSigned(GToSigned), _GToExecute(GToExecute), _signed(false)
{
    if (GToSigned < 1 || GToExecute < 1)
        throw AForm::GradeTooHighException();
    if (GToSigned > 150 || GToExecute > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &form) : _name(form._name), _GToSigned(form._GToSigned), _GToExecute(form._GToExecute), _signed(form._signed)
{
}

AForm &AForm::operator=(const AForm &form)
{
    if (this == &form)
        return *this;
    _signed = form._signed;
    return *this;
}

AForm::~AForm()
{
}

const char* AForm:: GradeTooHighException:: what()  const throw()
{
    const char *err = "invalid grad: is it too High";
    return (err);
}

const char* AForm:: GradeTooLowException:: what()  const throw()
{
    const char *err = "invalid grad: is it too Low";
    return (err); 
}

const std::string AForm::getName() const
{
    return _name;
}

int AForm::getGToSigned() const
{
    return _GToSigned;
}

int AForm::getGToExecute() const
{
    return _GToExecute;
}

bool AForm::getSigned() const
{
    return _signed;
}

void AForm::beSigned(Bureaucrat &instance)
{
    if (instance.getGrade() > _GToSigned)
        throw AForm::GradeTooLowException();
    else
        _signed = true;
}

std::ostream &operator<<(std::ostream &out, AForm &instance)
{
    out << "Form name: " << instance.getName() << std::endl;
    out << "Grade to sign: " << instance.getGToSigned() << std::endl;
    out << "Grade to execute: " << instance.getGToExecute() << std::endl;
    out << "Is signed: " << instance.getSigned() << std::endl;
    return out;
}