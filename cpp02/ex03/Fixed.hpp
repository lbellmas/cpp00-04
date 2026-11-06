#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int number;
        static const int  bits = 8;
    public:
        Fixed();
        Fixed(Fixed &copy);
        Fixed(const Fixed &copy);
        Fixed(int value);
        Fixed(const float value);
        ~Fixed();
        Fixed &operator=(const Fixed &copy);
        bool operator>(const Fixed &copy);
        bool operator<(const Fixed &copy);
        bool operator>=(const Fixed &copy);
        bool operator<=(const Fixed &copy);
        bool operator==(const Fixed &copy);
        bool operator!=(const Fixed &copy);
        Fixed operator+(const Fixed &copy);
        Fixed operator-(const Fixed &copy);
        Fixed operator*(const Fixed &copy);
        Fixed operator/(const Fixed &copy);
        Fixed &operator++();
        Fixed operator++(int);
        Fixed &operator--();
        Fixed operator--(int);
        int getRawBits() const;
        void    setRawBits(int const raw);
        float   toFloat() const;
        int toInt() const;
        static Fixed   &min(Fixed &one, Fixed &two);
        static const Fixed   &min(const Fixed &one, const Fixed &two);
        static const Fixed   &max(const Fixed &one, const Fixed &two);
        static Fixed   &max(Fixed &one, Fixed &two);
};

std::ostream &operator<<(std::ostream &out, const Fixed &value);