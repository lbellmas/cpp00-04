#include "HumanB.hpp"

HumanB::HumanB(std::string new_name)
{
    name = new_name;
	weaponB = NULL;
}
void    HumanB::attack(void)
{
	if (!weaponB)
	{
		std::cout << name << " attacks with his hands " << std::endl;
		return ;
	}
    std::string type;
    type = weaponB->getType();
    std::cout << name << " attacks with their " << type << std::endl;
}
void    HumanB::setWeapon(Weapon &new_weapon)
{
    weaponB = &new_weapon;
}
