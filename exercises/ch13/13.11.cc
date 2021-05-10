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
    };

    // 析构函数
    ~HasPtr()
    {
        delete ps;
    };

    string *ps;
    int i;
};