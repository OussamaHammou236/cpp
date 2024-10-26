# ifndef  ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        void announce(void);
        void set(std::string name);
        ~Zombie();
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif