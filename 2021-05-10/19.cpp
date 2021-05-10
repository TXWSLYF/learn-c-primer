#include <iostream>

int main()
{
    int i = 42;

    int *p;
    int *&r = p;

    r = &i;
    *r = 0;

    std::cout << i << '\n'
              << p << std::endl;

    return 0;
}