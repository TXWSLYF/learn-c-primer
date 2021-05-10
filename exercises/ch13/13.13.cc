#include <iostream>
#include <vector>
#include <initializer_list>

struct X
{
    X() { std::cout << "X()" << std::endl; }
    X(const X &) { std::cout << "X(const X&)" << std::endl; }
    X &operator=(const X &)
    {
        std::cout << "X& operator=(const X&)" << std::endl;
        return *this;
    }
    ~X() { std::cout << "~X()" << std::endl; }
};

// 拷贝构造函数
void f(const X &rx, X x)
{
    std::vector<X> vec;
    vec.reserve(2);
    vec.push_back(rx); // 拷贝构造函数
    vec.push_back(x);  // 拷贝构造函数
}

int main()
{
    X *px = new X; // 构造函数
    f(*px, *px);
    delete px;

    return 0;
}

// 构造函数 & 拷贝构造函数的数量和析构函数总是对应上的