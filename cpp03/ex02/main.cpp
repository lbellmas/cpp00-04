#include "FragTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "===== Creating FragTrap =====" << std::endl;
    FragTrap bob("Bob");

    std::cout << "\n===== Testing attacks =====" << std::endl;
    bob.attack("an enemy");
    bob.attack("another enemy");

    std::cout << "\n===== Taking damage =====" << std::endl;
    bob.takeDamage(40);
    bob.takeDamage(100); // Bob should now be dead or at 0 HP

    std::cout << "\n===== Trying to attack when dead =====" << std::endl;
    bob.attack("ghost enemy");
    bob.highFivesGuys();

    std::cout << "\n===== Repairing =====" << std::endl;
    bob.beRepaired(50);

    std::cout << "\n===== Using FragTrap special ability =====" << std::endl;
    bob.highFivesGuys();

    std::cout << "\n===== End of main =====" << std::endl;
    return 0;
}

