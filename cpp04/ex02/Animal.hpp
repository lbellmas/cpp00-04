#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        virtual void makeSound() const = 0;
        Animal() {};
        Animal(const Animal &copy);
        virtual ~Animal() {};
        const Animal &operator=(const Animal &other);
};

#endif