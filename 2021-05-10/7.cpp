#include <iostream>

int main()
{
    int sizeOfBool = sizeof(bool);
    int sizeOfChar = sizeof(char);
    int sizeOfInt = sizeof(int);
    int sizeOfLong = sizeof(long);
    int sizeOfFloat = sizeof(float);
    int sizeOfDouble = sizeof(double);

    std::cout << "各种数据类型长度" << std::endl;
    std::cout << "bool: " << sizeOfBool << std::endl;
    std::cout << "char: " << sizeOfChar << std::endl;
    std::cout << "int: " << sizeOfInt << std::endl;
    std::cout << "long: " << sizeOfLong << std::endl;
    std::cout << "float: " << sizeOfFloat << std::endl;
    std::cout << "double: " << sizeOfDouble << std::endl;

    return 0;
}