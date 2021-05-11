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

    string name; // 姓名
    int id;      // 编号
};

// 静态类型变量必须在类外初始化
int Employee::id_count = 0;

int main()
{
    Employee e1, e2, e3("e3");

    cout << e1.id << '\n'
         << e2.id << '\n'
         << e3.id << '\n'
         << e3.name << endl;

    return 0;
}