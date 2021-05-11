// 需要自己实现拷贝构造函数 & 拷贝赋值运算符
// 防止 id 重复
#include <iostream>
#include <string>

using namespace std;

class Employee
{

public:
    // 自增 id
    static int id_count;

    // 默认构造函数
    Employee() : id(++id_count){};
    Employee(string s) : name(s), id(++id_count){};

    // 拷贝构造函数
    Employee(const Employee &e)
    {
        name = e.name;
        id = ++id_count;
    };

    // 重载拷贝赋值运算符
    Employee &operator=(const Employee &e)
    {
        name = e.name;
        id = ++id_count;

        return *this;
    };

    string name; // 姓名
    int id;      // 编号
};

// 静态类型变量必须在类外初始化
int Employee::id_count = 0;

int main()
{
    Employee e1, e2(e1), e3 = e2;

    cout << e1.id << '\n'
         << e2.id << '\n'
         << e3.id << endl;

    return 0;
}