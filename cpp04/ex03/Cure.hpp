#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure(std::string type);
        Cure(void);
        Cure(Cure &instance);

        AMateria* clone() const;
        void use(ICharacter& target);
        Cure& operator=(Cure &instance);

        ~Cure();

};

#endif