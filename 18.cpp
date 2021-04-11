#include <iostream>

int main()
{
    double a = 1;
    double *p = &a;
    double **p1 = &p;

    std::cout << p << "\n"
              << p1 << std::endl;

    return 0;
}