#include <iostream>

int main()
{
    std::string str;

    std::getline(std::cin, str);

    for (auto &c : str)
    {
        c = std::toupper(c);
    }

    std::cout << str << std::endl;

    return 0;
}