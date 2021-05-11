#include <iostream>
#include <vector>

using namespace std;

shared_ptr<vector<int>> func1()
{
    return make_shared<vector<int>>();
}

void func2(vector<int> &v)
{
    int a;

    while (cin >> a)
    {
        v.push_back(a);
    }
}

void func3(vector<int> &v)
{
    for (auto a : v)
    {
        cout << a << endl;
    }
}

int main()
{
    auto a = func1();
    func2(*a);
    func3(*a);

    return 0;
}