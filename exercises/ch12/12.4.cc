#include "str-blob.h"

int main()
{
    // size_type 是无符号整型，当传递给 check 的参数小于 0 的时候，参数值会转换成一个正整数。
    StrBlob::size_type a = -1;

    cout << a << endl;

    return 0;
}