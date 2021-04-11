#include <iostream>
#include <vector>

class Screen
{
    friend class Window_mgr;
};

class Window_mgr
{
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex);

private:

};

int main()
{
    return 0;
}