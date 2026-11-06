#include "ClapTrap.hpp"

int main()
{
    ClapTrap first("first");
    ClapTrap second("second");

    first.attack(second.getName());
    second.takeDamage(10);
    second.attack(first.getName());
    second.beRepaired(10);
    return (0);
}