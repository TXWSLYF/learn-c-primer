#include <iostream>
#include <vector>

using namespace std;

// 传递引用
void f1(vector<int> &v)
{
    for (auto i : v)
    {
        cout << i << endl;
    }
}

// 传递指针
void f2(vector<int> *v)
{
    for (auto i : *v)
    {
        cout << i << endl;
    }
}

// 值传递，会拷贝整个 vector
void f3(vector<int> v)
{
    for (auto i : v)
    {
        cout << i << endl;
    }
}

int main()
{
    vector<int> v = {1, 2, 3};

    f1(v);
    f2(&v);
    f3(v);
}