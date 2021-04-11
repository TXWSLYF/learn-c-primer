#include <iostream>

using std::begin;
using std::cout;
using std::end;
using std::endl;
using std::string;

int main()
{

    string s = "hello world", *p = &s;

    cout << (*p)[1] << endl; // 正确，通过下标的方式能访问字符串特定索引的字符
    cout << *(p + 1) << endl; // 错误，p 不是字符串的迭代器，是字符串的指针
    cout << *(s.begin() + 1) << endl; // 正确，迭代器能执行算数运算

    return 0;
}