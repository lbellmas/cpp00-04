#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure created" << std::endl;
}

Cure::Cure(std::string type) : AMateria(type)
{}

Cure::~Cure()
{
    std::cout << "ice destroyed" << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria(copy.type)
{}

AMateria*    Cure::clone() const
{
    return (new Cure(*this));
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure &Cure::operator=(const Cure &copy)
{
    type = copy.type;
    return (*this);
}