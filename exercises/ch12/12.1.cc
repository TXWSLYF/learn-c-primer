#include "str-blob.h"

int main()
{
    StrBlob b1;
    {
        StrBlob b2 = {"a", "an", "the"};
        b1 = b2;
        b2.push_back("about");
    }

    cout << b1.size() << endl;

    return 0;
}

/**
 * b1 包含 4 个元素，b2 在退出块级作用域之后就被销毁了，但是不影响动态分配的内存
 */