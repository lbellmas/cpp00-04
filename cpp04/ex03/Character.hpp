#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria* slots[4];
    public:
        Character(std::string name);
        Character(const Character &copy);
        ~Character();
        Character &operator=(const Character &copy);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int i);
        void use(int p, ICharacter& target);
};
#endif