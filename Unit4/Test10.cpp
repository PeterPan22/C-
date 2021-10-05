#include <iostream>
using namespace std;
int main()
{
    int Income,Sum,Salary;
    cout << "Enter personal income : ";
    cin >> Income;
    cout << endl;

    if (Income <= 100000){
        Sum = (Income*5)/100;
        Salary = Income - Sum;
    }
    else if (Income >= 100001 && Income <=500000 ){
        Sum = (Income*10)/100;
        Salary = Income - Sum;
    }
    else if (Income >= 500001 && Income <=1000000 ){
        Sum = (Income*20)/100;
        Salary = Income - Sum;
    }
    else if (Income >= 1000001 && Income <=4000000 ){
        Sum = (Income*30)/100;
        Salary = Income - Sum;
    }
    else if (Income > 4000001 ){
        Sum = (Income*37)/100;
        Salary = Income - Sum;
    }
    cout << "Vate :" << Sum << " Bath\n";
    cout << "Total sarary :" << Salary << " Bath";
    cout << endl;

    return(0);

}
