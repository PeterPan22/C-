#include <iostream>
using namespace std;
int main(){
    int day,month,year,day_all;
    
    
    cout << "Input day month year :";
    cin >> day >> month >> year;

    while (day >30 || day <1){
        cout << "Input  day again :";
        cin >> day;
    }

    while (month >12 || day <1){
        cout << "Input  month again :";
        cin >> month;
    }

    while (year > 2559 || year < 2513){
        cout << "Input  year again :";
        cin >> year;
    }
    day-=1;
    month-=1;
    year-=2513;
    day_all =((year*360)+(month*30))+day;

    cout << "The difference is about : " << day_all << " day" << endl;


    
}