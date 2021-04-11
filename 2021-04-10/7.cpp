#include <iostream>

void reset(int *a)
{
    *a = 0;
}

void reset(int &a)
{
    a = 0;
}

int main()
{
    int i = 10, j = 10;

    reset(&i);
    reset(j);

    std::cout << i << j << std::endl;

    return 0;
}