#include "GarbageCollector.hpp"

Garbage:: Garbage(void)
{
    next = NULL;
}

Garbage:: ~Garbage()
{
    delete adr;
    std::cout << "delete adr\n";
}

Garbage::Garbage(AMateria *adr)
{
    this->adr = adr;
    this->next = NULL;
}

Garbage:: Garbage(AMateria *adr, Garbage *next)
{
    this->adr = adr;
    this->next = next;
}