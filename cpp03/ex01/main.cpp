#include "ScavTrap.hpp"

int main()
{
    ScavTrap john("John");

    john.attack("enemy");
    john.takeDamage(30);
    john.beRepaired(10);
    john.guardGate();

    return 0;
}
