#include "ClapTrap.hpp"

class   ScavTrap : virtual public ClapTrap
{
    public:
        void    guardGate();
        void    attack(const std::string &target);
        ScavTrap(std::string name);
        ScavTrap();
        ~ScavTrap();
};