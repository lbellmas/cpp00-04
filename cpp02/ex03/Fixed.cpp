#include "Fixed.hpp"

Fixed::Fixed(const float value)
{
    number = roundf(value * (1 << bits));
}

Fixed::Fixed(int value)
{
    number = value << bits;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(void)
{
    number = 0;
}

Fixed   Fixed::operator+(const Fixed &copy)
{
    Fixed   result(toFloat() + copy.toFloat());
    return (result);
}

Fixed   Fixed::operator-(const Fixed &copy)
{
    Fixed   result(toFloat() - copy.toFloat());
    return (result);
}

Fixed   Fixed::operator*(const Fixed &copy)
{
    Fixed   result(toFloat() * copy.toFloat());
    return (result);
}

Fixed   Fixed::operator/(const Fixed &copy)
{
    Fixed   result(toFloat() / copy.toFloat());
    return (result);
}

Fixed &Fixed::operator=(const Fixed &copy)
{
    if (this != &copy)
        this->number = copy.getRawBits();
    return (*this);
}


bool Fixed::operator<(const Fixed &copy)
{
    if (number < copy.number)
        return (true);
    return (false);
}

bool Fixed::operator>(const Fixed &copy)
{
    if (number > copy.number)
        return (true);
    return (false);
}

bool Fixed::operator<=(const Fixed &copy)
{
    if (number <= copy.number)
        return (true);
    return (false);
}

bool Fixed::operator>=(const Fixed &copy)
{
    if (number >= copy.number)
        return (true);
    return (false);
}

bool Fixed::operator==(const Fixed &copy)
{
    if (number == copy.number)
        return (true);
    return (false);
}

bool Fixed::operator!=(const Fixed &copy)
{
    if (number != copy.number)
        return (true);
    return (false);
}

Fixed   &Fixed::operator++()
{
    number++;
    return (*this);
}

Fixed   Fixed::operator++(int)
{
    Fixed   temp(*this);
    number++;
    return (temp);
}

Fixed   &Fixed::operator--()
{
    number--;
    return (*this);
}

Fixed   Fixed::operator--(int)
{
    Fixed   temp(*this);
    number--;
    return (temp);
}

Fixed::Fixed(Fixed &copy)
{
    *this = copy;
}

Fixed::Fixed(const Fixed &copy)
{
    *this = copy;
}

int Fixed::getRawBits(void) const
{
    return (number);
}

void    Fixed::setRawBits(int nnumber)
{
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

Fixed   &Fixed::min(Fixed &one, Fixed &two)
{
    if (one < two)
        return (one);
    return (two);
}

const Fixed   &Fixed::min(const Fixed &one, const Fixed &two)
{
    Fixed   onec(one);
    Fixed   twoc(two);

    if (onec < twoc)
        return (one);
    return (two);
}

Fixed   &Fixed::max(Fixed &one, Fixed &two)
{
    if (one > two)
        return (one);
    return (two);
}

const Fixed   &Fixed::max(const Fixed &one, const Fixed &two)
{
    Fixed   onec(one);
    Fixed   twoc(two);

    if (onec > twoc)
        return (one);
    return (two);
}