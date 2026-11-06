#pragma once

#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
    public:
        PhoneBook();

        void add_contact();
        void search_contact();
    private:
        int     old;
        Contact contacts[8];

};
