#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon  *weaponB;
        std::string name;
    public:
        void    attack();
        void    setWeapon(Weapon &new_weapon);
        HumanB(std::string new_name);
};
#endif
