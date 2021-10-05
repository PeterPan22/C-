#include <iostream>
using namespace std;
int main()
{
    int z;
    cout << "Enter number :" ;
    cin >> z;
    cout << z/1000 << "\t";
    cout << (z%1000)/100 << "\t";
    cout << (z%100)/10 << "\t";
    cout << (z%10) << "\t";
}