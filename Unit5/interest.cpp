#include <iostream>
using namespace std;
int main(){
    int deposit,time,interest,i;
    float outcome;

    cout << "Enter :";
    cin >> deposit;
    cout << "Enter :";
    cin >> time;
    cout << "Enter :";
    cin >> interest;

    for (i=1 ; i <= time ; i++){
        outcome = ((deposit*2)/100)+deposit;
    }
    cont << "show :" << outcome <<endl;
    return(0);
    

}