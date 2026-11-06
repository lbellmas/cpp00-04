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
        int getRawBits() const;
        void    setRawBits(int const raw);
        float   toFloat() const;
        int toInt() const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &value);