#include "Animal.hpp"

Animal::Animal(const Animal &copy)
{
    *this = copy;
}

void    Animal::makeSound() const
{
    std::cout << "generic animal sound" << std::endl;
}

const Animal  &Animal::operator=(const Animal &other)
{
    type = other.type;
    return (*this);
}