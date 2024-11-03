#include "PhoneBook.hpp"

void PhoneBook::set_contact(int i, Contact contact)
{
    if (i >= 0 && i < 8)
    {
        contacts[i] = contact;
    }
}

Contact *PhoneBook::get_contact(int i)
{
    if (i >= 0 && i < 8)
    {
        return &contacts[i];
    }
    return NULL;
}