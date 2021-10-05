/*ให้นักศึกษาเขียนโปรแกรมเพื่อหาผลรวมของตัวเลข
ที่ไม่ใช่จำนวนเฉพาะยกกำลัง 2 
ตั้งแต่ number1 ถึง number 2 
โดยที่ Number 1 น้อยกว่า number 2 (ให้รับค่าตัวแปร number1 และ number2 มาจากผู้ใช้)*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int number1,number2,sum;
    cout << " Enter number1 and number2 : ";
    cin >> number1 >> number2;
    if(number1 < number2){

        for(number1; number1 <= number2 ; number1++ ){
            if((number1==1 || number1%2 == 0 || number1%3 == 0 || number1%5==0 || number1%7==0) && (number1!=2 && number1!=3 && number1!=5 && number1!=7)){
                sum += number1;
                cout << " prime number is :" << number1 << endl;
                continue;
            }
        }
    }else{
        //Number >
      cout << "Number1 > Number2 ?";
    }
    cout << "sum of prime is : " << sum << endl;
    cout << "pow of sum : " <<  pow(sum,2);
    return(0);
}


