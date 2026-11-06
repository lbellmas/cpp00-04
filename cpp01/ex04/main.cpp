#include <iostream>
#include <fstream>
#include <string>

std::string replaceStd(std::string line, std::string rep, size_t p, size_t size)
{
    std::string nline;
    size_t  i = 0;
    while (i < p)
        nline += line[i++];
    nline.append(rep);
    p += size;
    while (line[p])
        nline += line[p++];
    return (nline);
}

int     main(int argc, char **argv)
{
    std::string  file;
    std::string s1;
    std::string s2;
    std::string line;

    if (argc != 4)
    {
        std::cout << "invaid number of args" << std::endl;
        return (0);
    }
    file = argv[1];
    s1 = argv[2];
    s2 = argv[3];
    std::ifstream inFile(file.c_str());
    if (!inFile)
    {
        std::cerr << "Error opening file" << std::endl;
        return (0);
    }
    std::ofstream nFile("replace.txt");
    if (!nFile.is_open())
        return (0);
    size_t  p;
    while (std::getline(inFile, line))
    {
        std::cout << "hola\n";
        p = line.find(s1);
        while (p < line.length())
        {
            std::cout << p << std::endl;
            line = replaceStd(line, s2, p, s1.length());
            std::cout << line << std::endl;
            p = line.find(s1, p + 1);
        }
        nFile << line << std::endl;
    }
    return (1);
}