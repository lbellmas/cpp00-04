#pragma once

#include <iostream>

class Contact
{
    private:
        std::string  fname;
        std::string  lname;
        std::string  nickname;
        std::string  phnumber;
        std::string  secret;
    public:
        void print_info();
        void good_print();
        void create_contact();
};
