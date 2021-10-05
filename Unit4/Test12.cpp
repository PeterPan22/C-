#include <iostream>
using namespace std;
int main()
{
    int Num;
    cout << "Enter number :";
    cin >> Num;

    if (Num < 0){
        cout << "Number is Negative";
    }
    if (Num == 0){
        cout << "Number is zero";
    }
    if (Num > 0){
        cout << "Number is Positive";
    }
    return(0);
}