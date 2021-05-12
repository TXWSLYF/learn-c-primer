#include <string>
#include <iostream>

using namespace std;

// 行为像值
class HasPtr
{
public:
    HasPtr(const string &s = string())
    {
        this->s = new string(s);
        a = 0;
    };

    // // 拷贝构造函数
    // HasPtr(const HasPtr &h)
    // {
    //     a = h.a;
    //     s = new string(*h.s);
    // };

    // 重载拷贝赋值运算符
    HasPtr &operator=(const HasPtr &h)
    {
        /**
         * 注意代码的顺序讲究，先拷贝底层 string，保证自赋值（a = a;）的情况也不会出现问题
         */
        auto news = new string(*h.s);
        /**
         * 注意这一步，拷贝赋值运算符的左边，一定是一个创建好的 HasPtr 对象，所以需要先释放之前的内存占用
         */
        delete s;
        s = news;
        a = h.a;

        return *this;
    };

    // 析构函数
    ~HasPtr()
    {
        delete s;
    };

    int a;
    string *s;
};

int main()
{
    HasPtr h1("h1"), h2(h1);

    // 如果不定义析构函数，将导致内存泄漏
    // 如果不定义拷贝构造函数，这样只会拷贝指针，但是指针指向的内存地址就是相同的
    cout << h1.s << '\n'
         << h2.s << endl;
}