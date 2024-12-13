#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "Brain.hpp"
#include <iostream>

class PrefixAnimal
{
    protected:
        std::string type;
        Brain *test;
    public:
        PrefixAnimal(void);
        PrefixAnimal(std::string str);
        PrefixAnimal(PrefixAnimal &instans);
        PrefixAnimal& operator=(PrefixAnimal &instans);

        virtual void makeSound() const = 0;
        virtual std::string getType() const = 0;


        virtual ~PrefixAnimal(void);
};


#endif