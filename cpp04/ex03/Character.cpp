#include "Character.hpp"

Character::Character(std::string name)
{
    this->name = name;
    for (int i = 0; i < 4; i++)
        slots[i] = NULL;
}

Character::Character(const Character &copy)
{
    name = copy.name;
    slots[0] = copy.slots[0]->clone();
    slots[1] = copy.slots[1]->clone();
    slots[2] = copy.slots[2]->clone();
    slots[3] = copy.slots[3]->clone();
}

Character::~Character()
{
    delete slots[0];
    delete slots[1];
    delete slots[2];
    delete slots[3];
}

Character   &Character::operator=(const Character &copy)
{
    name = copy.name;
    slots[0] = copy.slots[0]->clone();
    slots[1] = copy.slots[1]->clone();
    slots[2] = copy.slots[2]->clone();
    slots[3] = copy.slots[3]->clone();
    return (*this);
}

std::string const & Character::getName() const
{
    return (name);
}

void Character::equip(AMateria* m)
{
    if (!m)
        return ;
    int p = -1;
    while (++p < 4)
    {
        if (!slots[p])
            break ;
    }
    if (p > 3)
        return ;
    slots[p] = m;
}
void Character::unequip(int i)
{
    if (i >= 0 && i <= 3)
        slots[i] = NULL;
}
void Character::use(int p, ICharacter& target)
{
    if (slots[p])
        slots[p]->use(target);
}