#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat obj("oussama", 2);
        Form form("diwana", 10, 3);
        obj.signForm(form);
        form.beSigned(obj);
        std::cout << obj << "form signed : " << form.getSigned() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}