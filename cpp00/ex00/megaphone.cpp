#include <iostream>
#include <string>

void    camel(char *text, int p)
{
    std::string print = text;
    for (char &c : print)
    {
        c = std::toupper(c);
    }
    std::cout << print;
}

int     main(int argc, char **argv)
{
    int p;

    p = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (p < argc)
    {
        camel(argv[p], p);
        p++;
        if (p < argc)
            std::cout << " ";
    }
    std::cout << "\n";
    return (0);
}
