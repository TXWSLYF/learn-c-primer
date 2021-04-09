#include <iostream>


int main()
{
    std::string str("some string");

    for (decltype(str.size()) index = 0; index != str.size() && !std::isspace(str[index]); ++index)
    {
        str[index] = std::toupper(str[index]);
    }

    std::cout << str << std::endl;

    return 0;
}