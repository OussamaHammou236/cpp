#include "Harl.hpp"

void Harla:: debug( void )
{
    std::cout << "[ DEBUG ]\n";
    std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\n";
    std::cout << "I really do!\n";
}

void Harla:: info( void )
{
    std::cout << "[ INFO ]\n";
    std::cout << "I cannot believe adding extra bacon costs more money.\n";
    std::cout << "You didn't putenough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void Harla:: warning( void )
{
    std::cout << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for free.\n";
    std::cout  << "I've been coming foryears whereas you started working here since last month.\n";
}

void Harla:: error( void )
{
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n";
}

void Harla:: complain(std::string level)
{
    void (Harla::*ptr[])(void) = {&Harla::debug, &Harla::info, &Harla::warning, &Harla::error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            switch (i)
            {
                case 0:
                    (this->*ptr[0])();
                    (this->*ptr[1])();
                    (this->*ptr[2])();
                    (this->*ptr[3])();
                    break;
                case 1:
                    (this->*ptr[1])();
                    (this->*ptr[2])();
                    (this->*ptr[3])();
                    break;
                case 2:
                    (this->*ptr[2])();
                    (this->*ptr[3])();
                    break;
                case 3:
                    (this->*ptr[3])();
                    break;
                default:
                    break;
            }
            return ;
        }
    }
    std::cout << "[ Probably complaining about insignificant problems ]"<< "\n";
}
