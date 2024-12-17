#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *materiaS[4];
    public:
        void learnMateria(AMateria *matria);
        AMateria* createMateria(std::string const & type);


        MateriaSource(void);
        MateriaSource(MateriaSource &instance);
        MateriaSource& operator=(MateriaSource &instance);



        ~MateriaSource();
};

#endif