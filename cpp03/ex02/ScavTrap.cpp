#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << this->name << " has been created!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " has been destroyed" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}

void    ScavTrap::attack(const std::string &target)
{
    if (energyPoints <= 0)
    {
        std::cout << "ScavTrap " << name << " does not have enough energy points" << std::endl;
        return ;
    }
    if (hitPoints <= 0)
    {
        std::cout << "ScavTrap " << name << " is dead" << std::endl;
        return ;
    }
    energyPoints--;
    std::cout << "ScavTrap " << name << " has attacked " << target << std::endl;
}