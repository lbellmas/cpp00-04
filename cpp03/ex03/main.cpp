#include "DiamondTrap.hpp"

int main()
{
    std::cout << "=== Creating DiamondTrap ===" << std::endl;
    DiamondTrap d("Marvin");

    std::cout << "\n=== Testing attacks ===" << std::endl;
    d.attack("enemy");
    d.takeDamage(20);
    d.beRepaired(10);

    std::cout << "\n=== Testing whoAmI ===" << std::endl;
    d.whoAmI();

    std::cout << "\n=== End ===" << std::endl;
    return 0;
}

