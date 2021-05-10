#include <iostream>
#include <string>

using namespace std;

class HasPtr
{
public:
    // 构造函数
    HasPtr(const string &s = string()) : ps(new string(s)), i(0){};

    // 拷贝构造函数
    HasPtr(const HasPtr &h)
    {
        cout << "执行拷贝构造函数" << endl;

        ps = new string(*(h.ps));
        i = h.i;
    };

    // 重载拷贝赋值运算符
    HasPtr &operator=(const HasPtr &h)
    {
        cout << "拷贝赋值运算符" << endl;

        ps = new string(*(h.ps));
        i = h.i;

        return *this;
    }

    // 重载拷贝赋值运算符，这种写法的缺点是，返回的是一个新的对象，会调用拷贝构造函数
    // HasPtr operator=(const HasPtr &h)
    // {
    //     cout << "拷贝赋值运算符" << endl;

    //     ps = new string(*(h.ps));
    //     i = h.i;

    //     return *this;
    // }

    string *ps;
    int i;
};

int main()
{
    HasPtr h1 = HasPtr("h1"), h2;
    h2 = h1;

    return 0;
}