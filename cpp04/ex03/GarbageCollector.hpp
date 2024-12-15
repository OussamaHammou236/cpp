#ifndef GARBAGECOLLECTOR_HPP
#define GARBAGECOLLECTOR_HPP

struct Garbage
{
    void *adr;
    Garbage *next;

    Garbage(void);
    Garbage(void *adr);
    Garbage(void *adr, Garbage *next);
    ~Garbage();
};


#endif