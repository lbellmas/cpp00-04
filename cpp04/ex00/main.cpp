#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wrong = new WrongCat();
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    wrong->makeSound();
    delete(wrong);
    delete(meta);
    delete(j);
    delete(i);
    return 0;
}