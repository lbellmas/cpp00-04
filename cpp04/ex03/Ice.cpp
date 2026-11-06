#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice created" << std::endl;
}

Ice::Ice(std::string type) : AMateria(type)
{}

Ice::~Ice()
{
    std::cout << "ice destroyed" << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria(copy.type)
{}

AMateria*    Ice::clone() const
{
    return (new Ice(*this));
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice &Ice::operator=(const Ice &copy)
{
    type = copy.type;
    return (*this);
}