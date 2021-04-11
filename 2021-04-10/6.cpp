#include <iostream>
#include "add.h"

using std::cout;
using std::endl;

int add()
{
    static int count;

    return ++count;
}

int main()
{
    cout << add() << add() << add() << add() << add(1, 2) << endl;
    return 0;
}