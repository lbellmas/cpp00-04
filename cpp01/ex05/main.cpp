#include <iostream>
#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl bot;
    if (argc != 2)
    {
        std::cout << "invalid number of args" << std::endl;
        return (0);
    }
    bot.complain(argv[1]);
}