#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    WrongAnimal::type = "Cat";
    std::cout << type << " animal has been created" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
    WrongAnimal::type = copy.type;
    std::cout << type << " animal has been created" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << type << " has been destroyed" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "Miaauuuu!!" << std::endl;
}

const WrongCat   &WrongCat::operator=(const WrongCat &other)
{
    type = other.type;
    return (*this);
}