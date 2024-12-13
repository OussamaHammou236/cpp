#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal(void);
        ~WrongAnimal(void);
        WrongAnimal(std::string str);
        WrongAnimal(WrongAnimal &instans);
        WrongAnimal& operator=(WrongAnimal &instans);

        void makeSound() const;
};


#endif