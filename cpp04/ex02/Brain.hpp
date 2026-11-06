#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain() {};
        Brain(const Brain &copy);
        ~Brain();
        const Brain &operator=(const Brain &copy);
        void setIdea(int Index, const std::string &idea);
        std::string getIdea(int Index) const;
};

#endif