#include <iostream>

int main()
{
    int v1 = 0, v2 = 0;
    if (std::cin >> v1)
    {
        int v3 = 1;

        while (std::cin >> v2)
        {
            if (v1 == v2)
            {
                ++v3;
            }
            else
            {
                std::cout << v1 << "出现" << v3 << "次\n";
                v3 = 1;
                v1 = v2;
            }
        }

        std::cout << v1 << "出现" << v3 << "次\n";
    }

    return 0;
}