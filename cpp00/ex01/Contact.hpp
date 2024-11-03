#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <cstring>
#include <iomanip>
#include <sstream>
#include <cstdlib>
#include <cctype>
#include <stdexcept>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_number;
        std::string darkest_secret;
    public:
        std:: string get_value(int i);
        void set_value(std::string str, int i);

};


#endif