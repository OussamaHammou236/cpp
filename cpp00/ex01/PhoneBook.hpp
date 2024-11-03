#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
    public:
        void set_contact(int i, Contact contact);
        Contact *get_contact(int i);
};

#endif