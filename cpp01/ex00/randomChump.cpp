#include "Zombie.hpp"

void    randomChump( std::string n )
{
    Zombie  new_zombie(n);

    new_zombie.announce();
}