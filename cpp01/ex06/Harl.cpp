#include "Harl.hpp"

void    Harl::complain(std::string level)
{
    std::string options[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int value;

    value = 0;
    for (int i = 0; i < 4; i++)
    {
        if (options[i] == level)
        {
            value = i + 1;
            break;
        }
    }
    
    switch (value)
    {
        case 1:
        {
            debug();
        }
        case 2:
        {
            info();
        }
        case 3:
        {
            warning();
        }
        case 4:
        {
            error();
        }
        default :
        {
            if (value == 0)
                std::cout << "for the next one send a good input" << std::endl;
        }
    }
}

void    Harl::debug(void)
{
    std::cout << "[ DEBUG ]\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}
void    Harl::info(void)
{
    std::cout << "[ INFO ]\n";
    std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!\n" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for years, whereas you started working here just last month.\n" << std::endl;
}

void    Harl::error(void)
{
    std::cout << "[ ERROR ]\n";
    std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}