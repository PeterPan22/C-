/*จงเขียนโปรแกรมรับค่าตัวเลข 2 ค่า (x,y) จากคีย์บอร์ดและทดสอบเงื่อนไขว่า ค่าใดมากที่สุด  โดยใช้คำสั่ง 
if-else ตัวอย่างเช่น
Enter number 1: 10
Enter number 2: 35
Maximum is 35 */

#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout << "Enter number1 : ";
    cin >> x;
    cout << "Enter number2 : ";
    cin >> y;
    if(x < y){
        cout << "Maximun is " << y ;

    }
    else {
        cout << "Plerase agin";
    }
    return(0);

}