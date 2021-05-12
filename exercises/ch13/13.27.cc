#include <string>

using namespace std;

// 行为像指针的类
class HasPtr
{
public:
    // 构造函数
    HasPtr(const string &s = string()) : ps(new string(s)),
                                         i(0),
                                         use(new size_t(1))
    {
    }

    // 拷贝构造函数
    HasPtr(const HasPtr &p) : ps(p.ps), i(p.i), use(p.use)
    {
        ++*use;
    };

    // 重载拷贝赋值运算符
    HasPtr &operator=(const HasPtr &p)
    {
        // 右边的引用计数加一
        ++*p.use;

        // 左边的引用计数减一
        if (--*use == 0)
        {
            delete ps;
            delete use;
        }

        ps = p.ps;
        i = p.i;
        use = p.use;

        return *this;
    };

    // 析构函数
    ~HasPtr()
    {
        if (--*use == 0)
        {
            delete ps;
            delete use;
        }
    };

private:
    string *ps;
    int i;
    size_t *use; // 用来记录有多少个共享 *ps 的对象
};

int main()
{
}