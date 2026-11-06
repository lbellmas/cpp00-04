#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <cstdlib>

int     main(void)
{
    std::string option;
    PhoneBook   book;
    while (option != "EXIT" && option != "exit")
    {
        option = "";
        while (option == "")
        {
            std::cout << "what do you want to do?" << std::endl;
            std::getline(std::cin, option);
            if (std::cin.eof())
            {
                std::cout << "ctr d" << std::endl;
                std::exit(0);
            }
        }
//        std::transform(option.begin(), option.end(), option.begin(), ::toupper);
        if (option == "ADD")
            book.add_contact();
        else if (option == "SEARCH")
            book.search_contact();
    }
    return (0);
}
