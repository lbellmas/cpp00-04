#include "Zombie.hpp"

int     main(void)
{
    std::string first = "first";
    Zombie *z = zombieHorde(4, first);
    for (int i = 0; i < 4; i++)
        z[i].announce();
    delete[] z;
}
