#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        void    attack(const std::string &target);
        void    highFivesGuys(void);
        FragTrap(std::string name);
        ~FragTrap();
};