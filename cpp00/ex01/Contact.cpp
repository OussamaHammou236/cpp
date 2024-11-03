#include "Contact.hpp"

std::string Contact::get_value(int i)
{
    if (i == 0)
        return first_name;
    else if (i == 1)
        return last_name;
    else if (i == 2)
        return nick_name;
    else if (i == 3)
        return phone_number;
    else if (i == 4)
        return darkest_secret;
    else
        return "";
}

void Contact:: set_value(std::string str, int i)
{
    if (i == 0)
        first_name = str;
    else if (i == 1)
        last_name = str;
    else if (i == 2)
        nick_name = str;
    else if (i == 3)
        phone_number = str;
    else if (i == 4)
        darkest_secret = str;
}