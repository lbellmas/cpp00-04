#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    private:
    public:
        Ice();
        Ice(std::string type);
        ~Ice();
        Ice(const Ice &copy);
        AMateria* clone() const;
        void use(ICharacter& target);
        Ice &operator=(const Ice &copy);
};
#endif
