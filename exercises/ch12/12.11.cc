#include <iostream>
#include <vector>

using namespace std;

void process(shared_ptr<int> ptr) {}

int main()
{
    shared_ptr<int> p(new int(42));

    // 错误，shared_ptr<int>(p.get()) 会创建一个新的的智能指针
    // 这个智能指针的引用计数为 1，并且执行和 p 相同的内存空间
    // process 执行结束后，新的智能指针销毁，同时会释放相应的内存空间
    process(shared_ptr<int>(p.get()));

    cout << *p << endl;

    return 0;
}