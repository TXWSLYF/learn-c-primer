
#include <iostream>

using namespace std;

void check_little_or_big_endian()
{
    int x = 0x1122;
    int x0, x1;

    // 先取 x 的地址，然后强制转换为 char 类型指针
    // 然后利用索引下标的形式，就可以每次访问一个字节长度的数据
    // 最后再强制转换为 int 类型
    x0 = int(((char *)&x)[0]);
    x1 = int(((char *)&x)[1]);

    // 按照 16 进制的格式输出
    cout << hex
         << x0 << '\n'
         << x1 << endl;

    if (x0 == 22 && x1 == 11)
    {
        // 高位字节存储在内存中地位地址
        cout << "大字节序" << endl;
    }
    else
    {
        // 高位字节存储在内存中高位地址
        cout << "小字节序" << endl;
    }
}

int main()
{
    check_little_or_big_endian();
}