#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "PrefixAnimal.hpp"

class Dog : public PrefixAnimal
{
    public:
        Dog(void);
        Dog(Dog &instans);
        Dog& operator=(Dog &instans);

        void makeSound() const;
        std::string getType() const;

        ~Dog(void);
};

#endif