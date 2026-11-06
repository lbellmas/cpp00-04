#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    private:

    public:
        WrongCat();
        WrongCat(const WrongCat &copy);
        ~WrongCat();
        const WrongCat &operator=(const WrongCat &other);
        void makeSound() const;
};