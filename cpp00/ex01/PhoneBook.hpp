#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H

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
        std:: string get_first_name(int i);
        void set_value(std::string str, int i);

};

class PhoneBook
{
    private:
        Contact contacts[8];
        // int index;
    public:
        void set_contact(int i, Contact contact);
        Contact *get_contact(int i);
};

#endif