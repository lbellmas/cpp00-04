#include "Dog.hpp"

Dog::Dog()
{
    Animal::type = "Dog";
    std::cout << type << " animal has been created" << std::endl;
}

Dog::Dog(const Dog &copy)
{
    Animal::type = copy.type;
    std::cout << type << " animal has been created" << std::endl;
}

Dog::~Dog()
{
    std::cout << type << " animal has been destroyed" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "guau! guau!" << std::endl;
}

const Dog    &Dog::operator=(const Dog &other)
{
    type = other.type;
    return (*this);
}