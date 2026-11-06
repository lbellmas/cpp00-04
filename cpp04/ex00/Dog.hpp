#include "Animal.hpp"

class Dog : public Animal
{
    private:
        
    public:
        Dog();
        Dog(const Dog &copy);
        ~Dog();
        const Dog &operator=(const Dog &other);
        void makeSound() const;
};