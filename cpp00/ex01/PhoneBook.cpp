#include "PhoneBook.hpp"
#include <iostream>
#include <cstdlib>

PhoneBook::PhoneBook()
{
    old = 0;
}

void    PhoneBook::add_contact(void)
{
    contacts[old].create_contact();
    old++;
    if (old > 7)
        old = 0;
}


void    PhoneBook::search_contact(void)
{
    std::string user;
    int p = 0;
    while (p < 8)
    {
        std::cout << p + 1;
        std::cout << "|";
        contacts[p].good_print();
        p++;
    }
    std::cout << "from wich do you need info?\n";
    std::getline(std::cin, user);
    if (std::cin.eof())
    {
        std::cout << "ctr d" << std::endl;
        std::exit(0);
    }
    if (!std::isdigit(user[0]) || user.size() > 1)
        return ;
    p = user[0] - '0';
    if (p > 0 && p < 9)
        contacts[p - 1].print_info();
}
