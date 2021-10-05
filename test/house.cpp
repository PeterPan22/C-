#include <iostream>
using namespace std;
int main(){
    int mpy,i=1;
    float salary,ot=0;
    char late, over;

        cout << "Enter salary :";
        cin >> salary;

        cout << "Late :";
        cin >> late;
        while (late != 'N' && late !='Y' ){
            cout << "Late (Y/N) :";
            cin >> late;
        }
            if (late=='N'){
                salary +=1000;
        }else{}
        
        cout << "Over time hour :";
        cin >> over;
        while (over !='Y' && over !='N'){
            cout << "Over time hour (Y/N) :";
            cin >> over;
        }
            if (over =='Y'){
            cout << "Enter OT hour :";
            cin >> ot;
            ot*=200;
        }else{}

    
    salary = salary+ot;
    cout << "salary : " << salary<< endl;
    return(0);



    

}