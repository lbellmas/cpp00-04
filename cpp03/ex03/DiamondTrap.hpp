#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string name;
    public:
        void    whoAmI();
        void    attack(const std::string &target);
        DiamondTrap(std::string name);
        ~DiamondTrap();
};