#include "Brain.hpp"

Brain::Brain(const Brain &copy)
{
    *this = copy;
    std::cout << "new brain" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destroyed" << std::endl;
}

const Brain   &Brain::operator=(const Brain &copy)
{
    return (copy);
}

void    Brain::setIdea(int Index, const std::string &idea)
{
    if (Index < 100 && Index >= 0)
        ideas[Index] = idea;
}

std::string Brain::getIdea(int Index) const
{
    if (Index > 100 || Index < 0)
        return ("");
    return (ideas[Index]);
}