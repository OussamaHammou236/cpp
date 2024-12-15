#include "GarbageCollector.hpp"

Garbage:: Garbage(void)
{
    next = 0x0;
}

Garbage:: ~Garbage()
{
    delete adr;
}

Garbage::Garbage(void *adr)
{
    this->adr = adr;
}

Garbage:: Garbage(void *adr, Garbage *next)
{
    this->adr = adr;
    this->next = next;
}