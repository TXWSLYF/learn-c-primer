#include <iostream>

using std::begin;
using std::cout;
using std::end;
using std::endl;

// 遍历双层数组
int main()
{
    int ia[2][3] = {{1, 2, 3}, {4, 5, 6}};

    cout << "for 循环遍历双层数组：" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ia[i][j] << ' ';
        }

        cout << endl;
    }

    cout << "迭代器遍历双层数组：" << endl;
    for (auto b1 = begin(ia); b1 != end(ia); b1++)
    {
        for (auto b2 = begin(*b1); b2 != end(*b1); b2++)
        {
            cout << *b2 << ' ';
        }

        cout << endl;
    }

    cout << "范围循环遍历双层数组" << endl;
    for (auto &i : ia)
    {
        for (auto &j : i)
        {
            cout << j << ' ';
        }

        cout << endl;
    }

    return 0;
}