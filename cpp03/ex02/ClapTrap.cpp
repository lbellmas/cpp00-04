#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const& name)
{
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "ClapTrap " << this->name << " has been created!" << std::endl;
}
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " has been destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (energyPoints <= 0)
    {
        std::cout << "ClapTrap " << name << " does not have enough energy points" << std::endl;
        return ;
    }
    if (hitPoints <= 0)
    {
        std::cout << "ClapTrap " << name << " is dead" << std::endl;
        return ;
    }
    energyPoints--;
    std::cout << "ClapTrap " << name << " has attacked " << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    hitPoints = hitPoints - amount;
    std::cout << "ClapTrap " << name << " has taken " << amount << " damage" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    hitPoints = hitPoints + amount;
    std::cout << "ClapTrap " << name << " has repaired " << amount << std::endl;
}

std::string ClapTrap::getName()
{
    return (name);
}