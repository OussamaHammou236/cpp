#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(Dog &instans);
        Dog& operator=(Dog &instans);

        void makeSound() const;


        ~Dog(void);
};

#endif