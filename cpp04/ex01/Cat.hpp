#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(Cat &instans);
        Cat& operator=(Cat &instans);

        void makeSound() const;


        ~Cat(void);


};


#endif