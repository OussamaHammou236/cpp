#include "Harl.hpp"

void Harla:: debug( void )
{
    std::cout << " debug : love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void Harla:: info( void )
{
    std::cout << "info : I cannot believe adding extra bacon costs more money. You didn't putenough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void Harla:: warning( void )
{
    std::cout << "warning : I think I deserve to have some extra bacon for free. I've been coming foryears whereas you started working here since last month.\n";
}

void Harla:: error( void )
{
    std::cout << "error : This is unacceptable! I want to speak to the manager now.\n";
}

void Harla:: complain(std::string level)
{
    void (Harla::*ptr[])(void) = {&Harla::debug, &Harla::info, &Harla::warning, &Harla::error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*ptr[i])();
            return ;
        }
    }
    std::cout << "Unknown complaint level: " << level << "\n";
}
