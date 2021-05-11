#include <iostream>
#include <vector>

using namespace std;

// 返回一个动态分配的 int 的 vector
vector<int> *func1()
{
    auto v = new vector<int>();

    return v;
}

void func2(vector<int> *v)
{
    int a;

    while (cin >> a)
    {
        v->push_back(a);
    }
}

void func3(vector<int> *v)
{
    for (auto a : *v)
    {
        cout << a << endl;
    }
}

int main()
{
    auto a = func1();
    func2(a);
    func3(a);
    delete a;

    return 0;
}