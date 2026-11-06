#include "Contact.hpp"

void Contact::create_contact()
{
    std::cout << "first name\n";
    std::getline(std::cin, fname);
    std::cout << "last name\n";
    std::getline(std::cin, lname);
    std::cout << "nick name\n";
    std::getline(std::cin, nickname);
    std::cout << "phone number\n";
    std::getline(std::cin, phnumber);
    std::cout << "darkest secret" << std::endl;
    std::getline(std::cin, secret);
}

void    checked_print(std::string print)
{
    size_t p = 0;

    while (p < 10)
    {
        if (p == 9 && print.size() > 10)
            std::cout << ".";
        else if (p < print.size())
            std::cout << print[p];
        else
            std::cout << " ";
        p++;
    }
}

void    Contact::good_print(void)
{
    checked_print(fname);
    std::cout << "|";
    checked_print(lname);
    std::cout << "|";
    checked_print(nickname);
    std::cout << "\n";
}

void    Contact::print_info(void)
{
    if (fname.empty())
    {
        std::cout << "empty contact\n";
        return ;
    }
    std::cout << fname << std::endl;
    std::cout << lname << std::endl;
    std::cout << nickname << std::endl;
    std::cout << phnumber << std::endl;
    std::cout << secret << std::endl;
}
