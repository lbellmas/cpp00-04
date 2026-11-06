#include "Dog.hpp"

Dog::Dog()
{
    Animal::type = "Dog";
    brain = new Brain;
    std::cout << type << " animal has been created" << std::endl;
}

Dog::Dog(const Dog &copy)
{
    *this = copy;
    this->brain = new Brain(*copy.brain);
    std::cout << type << " animal has been created" << std::endl;
}

Dog::~Dog()
{
    delete (brain);
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