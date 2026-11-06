#include <iostream>

class Fixed
{
    private:
        int number;
        static const int  bits = 8;
    public:
        Fixed();
        Fixed(Fixed &copy);
        ~Fixed();
        Fixed &operator=(const Fixed &copy);
        int getRawBits() const;
        void    setRawBits(int const raw);
};