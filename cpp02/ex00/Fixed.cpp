#include "Fixed.hpp"

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    number = 0;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
    std::cout << "Copy assignments operator called" << std::endl;
    if (this != &copy)
        this->number = copy.getRawBits();
    return (*this);
}

Fixed::Fixed(Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (number);
}

void    Fixed::setRawBits(int nnumber)
{
    std::cout << "setRawBits member function called" << std::endl;
    number = nnumber;
}
