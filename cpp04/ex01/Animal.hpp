#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "Brain.hpp"
#include <iostream>

class Animal
{
    protected:
        std::string type;
        Brain *test;
    public:
        Animal(void);
        Animal(std::string str);
        Animal(Animal &instans);
        Animal& operator=(Animal &instans);

        virtual void makeSound() const;
        std::string getType() const;


        virtual ~Animal(void);
};


#endif