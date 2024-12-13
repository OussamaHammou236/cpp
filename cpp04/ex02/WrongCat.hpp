#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat(void);
        ~WrongCat(void);
        WrongCat(WrongCat &instans);
        WrongCat& operator=(WrongCat &instans);

        void makeSound() const;
};


#endif