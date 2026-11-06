#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    storage[0] = NULL;
    storage[1] = NULL;
    storage[2] = NULL;
    storage[3] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    storage[0] = copy.storage[0];
    storage[1] = copy.storage[1];
    storage[2] = copy.storage[2];
    storage[3] = copy.storage[3];
}

MateriaSource::~MateriaSource()
{
    delete storage[0];
    delete storage[1];
    delete storage[2];
    delete storage[3];
}
MateriaSource   &MateriaSource::operator=(const MateriaSource &copy)
{
    storage[0] = copy.storage[0];
    storage[1] = copy.storage[1];
    storage[2] = copy.storage[2];
    storage[3] = copy.storage[3];
    return (*this);
}

void    MateriaSource::learnMateria(AMateria* m)
{
    if (!m)
        return ;
    for (int p = 0; p < 4; p++)
    {
        if (!storage[p])
        {
            storage[p] = m;
            return ;
        }
    }
}

AMateria*   MateriaSource::createMateria(std::string const & type)
{
    for (int p = 0; p < 4; p++)
    {
        if (storage[p] && storage[p]->getType() == type)
            return (storage[p]->clone());
    }
    return (NULL);
}