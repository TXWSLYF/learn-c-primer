#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> v(10, "hello");

    std::cout << v[0] << std::endl;

    return 0;
}
