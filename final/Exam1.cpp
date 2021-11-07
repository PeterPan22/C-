#include <iostream>
using namespace std;
 void swapByVal(int, int);
void swapByRef(int&, int&);

int main()
{

    int x = 1, y = 5;

    cout << "Passing by value" << endl;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapByVal(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    cout << "Passing by reference" << endl;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapByRef(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    return 0;
}

void swapByVal(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapByRef(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
