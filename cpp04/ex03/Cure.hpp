#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure(std::string type);
        Cure(void);

        AMateria* clone() const;

};

#endif