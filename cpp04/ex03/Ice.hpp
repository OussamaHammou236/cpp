#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice(std::string type);
        Ice(void);
        Ice(Ice &instance);

        AMateria* clone() const;
        void use(ICharacter& target);
        Ice& operator=(Ice &instance);

        ~Ice();

};

#endif