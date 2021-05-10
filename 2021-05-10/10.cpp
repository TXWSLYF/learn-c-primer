#include <iostream>

int main()
{
    int ival = 89;
    int *p = &ival;

    std::cout << p << '\n'
              << &ival << '\n'
              << *p << '\n'
              << ival << '\n';

    return 0;
}