#include "HumanA.hpp"

HumanA::HumanA(std::string new_name, Weapon &new_weapon): weaponA(new_weapon)
{
    name = new_name;
}

void    HumanA::attack(void)
{
    std::string type;
    type = weaponA.getType();
    std::cout << name << " attacks with their " << type << std::endl;
}