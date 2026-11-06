#include "Cat.hpp"

Cat::Cat()
{
    Animal::type = "Cat";
    brain = new Brain;
    std::cout << type << " animal has been created" << std::endl;
}

Cat::Cat(const Cat &copy)
{
    *this = copy;
    this->brain = new Brain(*copy.brain);
    std::cout << type << " animal has been created" << std::endl;
}

Cat::~Cat()
{
    delete (brain);
    std::cout << type << " has been destroyed" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "Miaauuuu!!" << std::endl;
}

const Cat   &Cat::operator=(const Cat &other)
{
    type = other.type;
    return (*this);
}