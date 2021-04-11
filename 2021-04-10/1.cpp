#include <iostream>

using std::begin;
using std::cout;
using std::end;
using std::endl;

int main()
{
    int a[] = {1,
               2,
               3,
               4,
               5,
               6};

    int *b = begin(a);
    int *e = end(a);

    while (b != e)
    {
        cout << *b << endl;
        b++;
    }

    return 0;
}