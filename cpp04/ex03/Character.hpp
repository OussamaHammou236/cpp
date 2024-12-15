#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "GarbageCollector.hpp"
// #include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria *Materia[4];
        static Garbage *gc;
        static int cont;
    public:
        Character(void);
        Character(std::string name);
        Character(Character &instance);
        ~Character(void);

        Character& operator=(Character &instance);

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

        
};

#endif