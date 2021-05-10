#include <iostream>

using namespace std;

class Sales_data
{
public:
    // 构造函数
    Sales_data(){};

    // 拷贝构造函数
    Sales_data(Sales_data &data)
    {
        cout << "拷贝构造函数" << endl;
    };

    // 析构函数
    ~Sales_data()
    {
        cout << "析构函数" << endl;
    };
};

void fcn(Sales_data *trans, Sales_data accum)
{
    Sales_data item1(*trans), item2(accum);
}

int main()
{
    Sales_data s1;
    fcn(&s1, s1);

    return 0;
}

// 输出
// 拷贝构造函数
// 拷贝构造函数
// 拷贝构造函数
// 析构函数
// 析构函数
// 析构函数
// 析构函数