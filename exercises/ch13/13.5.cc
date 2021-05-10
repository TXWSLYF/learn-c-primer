#include <iostream>
#include <string>

using namespace std;

class HasPtr
{
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0){};

    // 写法一
    HasPtr(const HasPtr &h)
    {
        cout << "执行拷贝构造函数" << endl;

        ps = new std::string(*(h.ps));
        i = h.i;
    };

    // 写法二
    // HasPtr(const HasPtr &h) : ps(new std::string(*(h.ps))), i(h.i){};

    std::string *ps;
    int i;
};

int main()
{
    // 返回的是字符串
    std::string foo1 = std::string("foo1");
    // 返回的是指向字符串的指针
    std::string *foo2 = new std::string("foo2");

    HasPtr h1 = HasPtr("h1");
    HasPtr h2 = h1; // 通过 h1 初始化创建 h2，会执行 HasPtr 的拷贝构造函数

    cout << h1.ps << '\n'
         << h2.ps << endl;

    return 0;
}