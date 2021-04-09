#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v(10, 1);

    for (auto &r : v)
    {
        r = r * 2;
        cout << r << endl;
    }

    return 0;
}