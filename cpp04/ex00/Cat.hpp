#include "Animal.hpp"

class Cat : public Animal
{
    private:

    public:
        Cat();
        Cat(const Cat &copy);
        ~Cat();
        const Cat &operator=(const Cat &other);
        void makeSound() const;
};