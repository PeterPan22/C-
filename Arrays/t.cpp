#include <iostream>

using namespace std;

int sum(int x, int y)
{
    int z = x + y;
    return z;
}

int main()
{
    int a = 3;
    int b = 5;
    cout << "a + b = " << sum(a, b);
    return 0;
}