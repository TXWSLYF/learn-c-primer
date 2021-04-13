#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("./1.txt");
    string data;
    string line;

    ofstream("./2.txt", ofstream::app);

    while (getline(in, line))
    {
        cout << line;
        cout << endl;
    }

    return 0;
}