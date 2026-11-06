#include "Harl.hpp"

void    Harl::complain(std::string level)
{
	void (Harl::*functions[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
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
            (this->*functions[0])();
            break;
        }
        case 2:
        {
            (this->*functions[1])();
            break;
        }
        case 3:
        {
            (this->*functions[2])();
            break;
        }
        case 4:
        {
            (this->*functions[3])();
            break;
        }
    }
}

void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for years, whereas you started working here just last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
