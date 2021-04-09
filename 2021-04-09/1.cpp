#include <iostream>

int add(int x, int y)
{
    return x + y;
}

int main()
{
    auto sum{add(5, 6)}; // add() returns an int, so sum's type will be deduced to int

    std::cout << sum << std::endl;

    return 0;
}