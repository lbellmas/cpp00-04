# include <iostream>

int     main(void)
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *pointer = &brain;
    std::string &reference = brain;

    std::cout << "address:\n" << &brain << "\n" << &pointer
        << "\n" << &reference << std::endl;
    std::cout << "values:\n" << brain << "\n" << pointer
        << "\n" << reference << std::endl;
}