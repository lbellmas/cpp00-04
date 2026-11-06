#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << this->name << " has been created!" << std::endl;
}

FragTrap::FragTrap()
{
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << " has been created!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " has been destroyed" << std::endl;
}

void    FragTrap::attack(const std::string &target)
{
    if (energyPoints <= 0)
    {
        std::cout << "FragTrap " << name << " does not have enough energy points" << std::endl;
        return ;
    }
    if (hitPoints <= 0)
    {
        std::cout << "FragTrap " << name << " is dead" << std::endl;
        return ;
    }
    energyPoints--;
    std::cout << "FragTrap " << name << " has attacked " << target << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " high-fives!" << std::endl;
}