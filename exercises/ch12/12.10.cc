#include <iostream>
#include <vector>

using namespace std;

void process(shared_ptr<int> ptr) {}

int main()
{
    shared_ptr<int> p(new int(42));

    // 正确，shared_ptr<int>(p) 会创建一个临时的智能指针
    // 这个临时的智能指针，指向和 p 一样的内存空间，此时引用计数为 2
    // process 执行完成后，临时智能指针被销毁，引用计数为 1
    process(shared_ptr<int>(p));

    cout << *p << endl;

    return 0;
}