#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(const Dog &copy);
        ~Dog();
        const Dog &operator=(const Dog &other);
        void makeSound() const;
};