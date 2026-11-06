#include "Fixed.hpp"

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    number = roundf(value * (1 << bits));
}

Fixed::Fixed(int value)
{
    std::cout << "Int constructor called" << std::endl;
    number = value << bits;
}

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

Fixed::Fixed(const Fixed &copy)
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

float   Fixed::toFloat(void) const
{
    return ((float)number / (1 << bits));
}

int Fixed::toInt(void) const
{
    return (number >> bits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &value)
{
    out << value.toFloat();
    return (out);
}
