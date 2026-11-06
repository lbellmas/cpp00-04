#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie*  horde = new Zombie[N];
    for (int p = 0; p < N; p++)
        horde[p] = Zombie(name);
    return (horde);
}
