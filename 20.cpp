int main()
{
    int a = 1;
    const int *p1 = &a;
    int *const p2 = &a;

    *p2 = 10;

    p1 = &a;
}