/*จงเขียนโปรแกรมดวยคําสั่ง while, do-while, หรือ for สําหรับการคํานวณผลบวกของเลขจํานวนนับ
เลขคี่ (1, 3, 5, 7, ... , N) คือ 1 + 3 + 5 + 7 + 9 + ...+ N เมื่อ N เป็นค่าเลขคี่ที่รับจากคีย์บอร์ด เลขค
ุ่ด้วยแค่เปลี่ยนเครื่องหมายจาก != เป็น == ก็ใช้ได้แล้ว*/
#include <iostream>
using namespace std;
int main()
{
 int n, i , sum=0;
 cout << "Enter N : ";
 cin >> n;
 for (i=1;i <= n ;i++){
     if(i%2 != 0){
        cout << i << " is odd number " << endl;
        sum +=i;
     }        
 }
    
        cout << sum << " Result odd number " << endl;
    
        
     
return(0);
     

 
}