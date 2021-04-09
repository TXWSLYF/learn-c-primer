#include <iostream>

using namespace std;

int main()

{
    string str1 = "hello world";
    string str2 = str1;

    cout << "Sharing the memory:" << '\n'
         << &str1 << '\n'
         << &str2 << endl;

    str1[1] = 'q';
    str2[1] = 'w';

    cout << "After Copy-On-Write:" << '\n'
         << &str1 << '\n'
         << &str2 << endl;

    return 0;
}
