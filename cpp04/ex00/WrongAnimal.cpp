#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    type = copy.type;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "generic animal sound" << std::endl;
}

const WrongAnimal  &WrongAnimal::operator=(const WrongAnimal &other)
{
    type = other.type;
    return (*this);
}