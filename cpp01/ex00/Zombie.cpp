#include "Zombie.hpp"

Zombie::Zombie(std::string n)
{
    name = n;
}

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << name << " has been killed\n";
}
