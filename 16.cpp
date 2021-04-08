int main()
{
    int i = 10;
    const int &r1 = i;
    const int &r2 = 42;
    const int &r3 = r1 * 2;

    double dval = 3.14;
    const int &r4 = dval;

    return 0;
}