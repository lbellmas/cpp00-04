#include "Cat.hpp"

Cat::Cat()
{
    Animal::type = "Cat";
    std::cout << type << " animal has been created" << std::endl;
}

Cat::Cat(const Cat &copy)
{
    Animal::type = copy.type;
    std::cout << type << " animal has been created" << std::endl;
}

Cat::~Cat()
{
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