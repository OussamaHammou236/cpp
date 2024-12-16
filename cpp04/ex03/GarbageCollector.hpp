#ifndef GARBAGECOLLECTOR_HPP
#define GARBAGECOLLECTOR_HPP
#include <iostream>
#include "AMateria.hpp"
struct Garbage
{
    AMateria *adr;
    Garbage *next;

    Garbage(void);
    Garbage(AMateria *adr);
    Garbage(AMateria *adr, Garbage *next);
    ~Garbage();
};


#endif