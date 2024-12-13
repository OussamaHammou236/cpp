#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain(void);
        Brain(Brain &instans);
        Brain& operator=(Brain &instans);
        ~Brain(void);
};

#endif