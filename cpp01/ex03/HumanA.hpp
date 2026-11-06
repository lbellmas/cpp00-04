#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon  &weaponA;
    public:
        void    attack();
        HumanA(std::string new_name, Weapon &new_weapon);
};
#endif