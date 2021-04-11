#include <iostream>

using std::begin;
using std::cout;
using std::end;
using std::endl;

int main()
{
    int ia[][3] = {{1, 2, 3}, {4, 5, 6}};

    auto a = ia;

    for (auto a : *a)
    {
        cout << a << '\n';
    }

    return 0;
}