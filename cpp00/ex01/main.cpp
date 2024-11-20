#include "PhoneBook.hpp"

bool isPrintable(std::string str)
{
    for (int i = 0; str[i]; i++)
    {
        if (!isprint(str[i]))
            return false;
    }
    return true;
}

bool isValidNumber(std::string str)
{
    size_t start = 0;

    if (str[0] == '-' || str[0] == '+')
        start = 1;
    for (size_t i = start; i < str.length(); i++)
    {
        if (!isdigit(str[i]))
            return false;
    }
    return true;
}

std::string get_data(std::string str)
{
    std::string data;

    while (data.empty() || !isPrintable(data))
    {
        std::cout << str;
        std::getline(std::cin, data);
        if (std::cin.eof())
            exit(0);
    }
    return data;
}

Contact add_element()
{
    std::string str;
    Contact contact;

    contact.set_value(get_data("           entre first name :"), 0);
    contact.set_value(get_data("           entre last name :"), 1);
    contact.set_value(get_data("           entre nickname :"), 2);
    str = get_data("           entre phone number :");
    while (!isValidNumber(str))
        str = get_data("           entre phone number :");
    contact.set_value(str, 3);
    contact.set_value(get_data("           entre darkest secre :"), 4);
    return contact;
}

void print(std::string str)
{
    if (str.length() > 10)
        std::cout << std::setw(10) << str.substr(0, 9) + "." << "|";
    else
        std::cout << std::setw(10) << str << "|";
}

void print_elementOFclass(int i, PhoneBook book)
{
    std::string str;
    Contact *contact;
    int c;
    std::cout << "Index     |First Name|Last Name |Nickname  |\n";
    std::cout << "----------|----------|----------|----------|\n";
    for (int len = 0;len < i;len++)
    {
        std::cout << std::setw(10) << len << "|";
        print(book.get_contact(len)->get_value(0));
        print(book.get_contact(len)->get_value(1));
        print(book.get_contact(len)->get_value(2));
        std::cout << "\n";
    }
    str = get_data("            entre index :");
    while (!isValidNumber(str))
    {
        std::cout << "        error in input try again\n";
        str = get_data("            entre index :");
    }
    c = std::atoi(str.c_str());
    if (c >= i || i < 0)
    {
        std::cout << "        out of range !\n";
        return;
    }
    contact = book.get_contact(c);
    std::cout << "      first name     : " << contact->get_value(0) << "\n";
    std::cout << "      last name      : " << contact->get_value(1) << "\n";
    std::cout << "      nickname       : " << contact->get_value(2)  << "\n";
    std::cout << "      phone_number   : " << contact->get_value(3)  << "\n";
    std::cout << "      darkest_secret : " << contact->get_value(4)  << "\n";
}

int main()
{
    PhoneBook book;
    std:: string str;
    int i = 0;
    int c = 0;
    while (1)
    {
        std:: cout << "Enter your command (ADD, SEARCH, EXIT):";
        std::getline(std::cin, str);
        if (std::cin.eof())
            break ;
        if (i >= 8)
            i = 0;
        if (str == "EXIT")
            exit(0);
        else if (str == "ADD")
        {
            book.set_contact(i, add_element());
            if (c < 8)
                c++;
            i++;
        }
        else if (str == "SEARCH")
            print_elementOFclass(c, book);
        else
            std::cout << "Unknown command! Please enter ADD, SEARCH, or EXIT.\n";
    }
    return 0;  
}

