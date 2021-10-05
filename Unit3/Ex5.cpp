/*จงเขียนโปรแกรมจัดกลุ่มของคนตามอายุ (Age) ที่มีเงื่อนไขดังนี้ 
กลุุ่มเด็ก (Children) อายุ 0 – 10 ปี
กลุ่มวัยรุ่น (Teenage) อายุ 11 – 20 ปี 
กลุ่มวัยทํางาน (Adult) อายุ 21 – 35 ปี 
กลุ่มวัยกลางคน (Middle age) อายุ 36 – 55 ปี 
กลุ่มสูงวัย (Old age) อายุ 56 ปีขึ้นไป*/

#include <iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter Age : ";
    cin >> x;

    if ((x>=0) &&(x<=10)){
        cout <<"Children";
    }else if ((x>11) &&(x<=20)){
        cout << "Teenage";
    }else if ((x>21) &&(x<=35)){
        cout << "Adult";
    }else if ((x>36) &&(x<=55)){
        cout << "Middle age";
    }else
        cout << "Old age";
    
    return(0);

    
    
}