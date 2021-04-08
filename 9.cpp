#include <iostream>

int main()
{
    int i, &ri = i;

    i = 10;
    ri = 89;

    std::cout << i << ri << std::endl;

    return 0;
}