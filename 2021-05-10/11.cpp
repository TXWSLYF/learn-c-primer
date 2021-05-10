#include <iostream>

int main()
{
    double dval = 1.23;
    double *pd = &dval;
    double *pd2 = pd;

    std::cout << dval << '\n'
              << pd << '\n'
              << pd2 << '\n';

    return 0;
}