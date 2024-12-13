#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "PrefixAnimal.hpp"

class Cat : public PrefixAnimal
{
    public:
        Cat(void);
        Cat(Cat &instans);
        Cat& operator=(Cat &instans);

        void makeSound() const;
        std::string getType() const;

        ~Cat(void);


};


#endif