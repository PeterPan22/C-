/*จงเขียนโปรแกรมรับตัวเลขของเดือน (1-12) จากคีย์บอร์ด และพิมพ์ผลลัพธ์เป็นชื่อย่อของเดือน (1: Jan, 
2:Feb, 3: Mar, 4:Apr, 5:May, 6:Jun, 7:Jul, 8:Aug, 9:Sep, 10:Oct, 11:Nov, 12:Dec) โดยใชืคําสั่ง 
switch ตัวอย่างเช่น 
Enter a number (1, 2, 3, …, or 12): 8
                                    Aug*/
#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter number of months (1,2,3, ...,or 12) :";
    cin >> number;
    cout << endl;

    switch(number){
        case 1: cout << "January";
        break;
        case 2: cout << "February";
        break;
        case 3: cout << "March";
        break;
        case 4: cout << "April";
        break;
        case 5: cout << "May";
        break;
        case 6: cout << "June";
        break;
        case 7: cout << "Juny";
        break;
        case 8: cout << "August";
        break;
        case 9: cout << "September";
        break;
        case 10: cout << "October";
        break;
        case 11: cout << "December";
        break;
        case 12: cout << "November";
        break;
        return(1);

    }
    return(0);
}