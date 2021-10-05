/*จงเขียนโปรแกรมรับค่าของเลขจํานวนเต็ม (N) จากคีย์บอร์ด และพิมพ์ตัวเลขตัวสุดท้ายของ N เป็น
ข้อความ (เช่น 0:Zero, 1:One, 2:Two, 3:Three, 4:Four, 5:Five, 6:Six, 7:Seven, 8:Eight, 9:Nine) 
โดยใช้คําสั่ง switch แนะนํา การหาตัวเลขตัวสุดท้ายของเลขจํานวนเต็มใดๆ (N) สามารถทําได้ด้วยการ
หาเศษที่ได้จากการหารด้วย 10 ของ N (คือ N%10) ตัวอย่างเช่น 
Enter an integer N = 512
2: Two*/
#include <iostream>
using namespace std;
int main()
{
    int num,sum;
    cout << "Enter number : ";
    cin >> num;
    sum = num%10;

    switch (sum){
        case 0 : cout << "Zero";
                break;
        case 1 : cout << "One";
                break;
        case 2 : cout << "Two";
                break;
        case 3 : cout << "Three";
                break;
        case 4 : cout << "Four";
                break;
        case 5 : cout << "Five";
                break;
        case 6 : cout << "Six";
                break;
        case 7 : cout << "Seven";
                break;
        case 8 : cout << "Eight";
                break;
        case 9 : cout << "Nine";
                break;
                
        default : cout << "Error" << endl;
        return(1);

    }
    return(0);
    
}