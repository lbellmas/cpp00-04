#include "DiamondTrap.hpp"

void    DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << name << " ClapTrap name: " << ClapTrap::name << std::endl;
}
void    DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
    this->name = name;
    hitPoints = FragTrap::hitPoints;
    energyPoints = ScavTrap:: energyPoints;
    attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap " << name << " has been created" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Diamond Trap " << name << " has been destroyed" << std::endl;
}