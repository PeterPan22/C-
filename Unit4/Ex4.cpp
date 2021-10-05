/* เขียนโปรแกรมรับค่าตัวเลข  1 ค่า จากคีบอร์ดและทดสอบว่าเป็นเลขที่หารด้วย 5 ลงตัว หรือไม่ ตัวอย่างเช่น
Enter x: 10
10 is divisible by 5. */
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    if(n%5 == 0){
        cout << n << " is divisible by 5";

    }
    else{
        cout << " Plerse agin" ;
    }
    return(0);
    
}