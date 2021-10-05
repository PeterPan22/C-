#include <iostream>
using namespace std;
int main()
{
    int Number1,Number2;
    cout << "Enter first number1 :";
    cin >> Number1;
    cout << "Enter second number2 :";
    cin >> Number2;
    cout << endl;
    cout << "Result of :\n" << Number1 << "+" << Number2;
    cout <<  "=" << Number1+Number2 << endl;
    cout << Number1 << "-" << Number2;
    cout <<  "=" << Number1-Number2 << endl;
    cout << Number1 << "*" << Number2;
    cout <<  "=" << Number1*Number2 << endl;
    cout << Number1 << "/" << Number2;
    cout <<  "=" << Number1/Number2 << endl;
    cout << Number1 << "%" << Number2 << "=" << Number1%Number2 << endl;
      
    return(0);
}