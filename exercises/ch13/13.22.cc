#include <string>

using namespace std;

// 行为像值
class HasPtr
{
public:
    // 默认构造函数
    HasPtr() = default;

    // 拷贝构造函数
    HasPtr(const HasPtr &h)
    {
        a = h.a;
        s = new string(*h.s);
    };

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

private:
    int a;
    string *s;
};

int main()
{
}