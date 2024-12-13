#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria(std::string const & type);
        AMateria(void);
        AMateria(AMateria &instance);

        AMateria& operator=(AMateria &instance);

        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        // virtual void use(ICharacter& target);



        virtual ~AMateria();
}; 

#endif