#include<iostream>
#include <string>
using namespace std;
int main()
{ 
    char ch;
    cout << "\nEnter a number : ";
    cin >> ch;
    cout << endl;

    if(ch >= '0'&& ch <= '9')
        cout << ch << " is number";
    else
        cout << "Please enter again " << endl;
        return(0);
}
   