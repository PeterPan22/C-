/* ให้นักศึกษาเขียนโปรแกรมเพื่อหาค่าคะแนนเฉลี่ยการทำทดสอบย่อย
มีคะแนนเต็ม 5 คะแนน โดยกำหนดให้รับจำนวนนักเรียนที่ทำข้อสอบจากคีย์บอร์ด
และจากนั้นให้รับคะแนนของนักเรียนแต่ละคนผ่านทางคีย์บอร์ด
หากการป้อนคะแนนน้อยกว่า 0 หรือมากกว่า 5 คะแนนให้รับค่าคะแนนของนักเรียนคนนั้นใหม่ */
#include <iostream>
using namespace std;
int main ()
{
    int score = 0,i,n;
    float rage = 0 ,sum = 0, avg ;
    cout << " enter sud : ";
    cin >> rage ;
    for(i=1 ; i <=rage ; i++){
        cout << "enter std " << i << " score : ";
        cin >> score;

        for(score ; (score < 0) || (score > 5) ; n++){
            cout << "enter score :";
            cin >> score ;
        }
        sum += score;

    }
    avg = sum/rage;
    cout << "sum is :" << sum << endl;
    cout << "avg is :" << avg << endl;
    return(0);
}

