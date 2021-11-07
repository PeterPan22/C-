#include <iostream>
#include <string.h>
#include <string>
using namespace std;
char *month(int data);
char *month2(int data);

int main()
{
    //แปลงค่าข้อมูลตัวเลขเป็นตัวอักษร arrays 1 มิคิ
    int n,nn,a,d;
    char data[10];
    char *str;
    str = (char*) malloc(12);
    cout << "Input date(dd/mm/yyyy) : ";
    cin >> d >> data >> a;

    n = atoi(data);
    strcpy(str,month(n));
    cout << "Format 1 : " << str << " " << d <<"," <<  a << endl;

    nn = atoi(data);
    strcpy(str,month2(nn));   
    cout << "Format 2 : " <<  d << " " << str << " "<<  a << endl;
    
    

    return(0);
}
// function ใช้สำหรับแปลงตัวเลข
char *month(int n)
{   
    // Arrays 1 มิติ
    char *m[]= {"January", "February", "March", "April", "May", "June","July", 
                     "August", "September", "October", "November", "December"};
    return(m[n-1]);

}

// function ใช้สำหรับแปลงตัวเลข
char *month2(int nn)
{   
    
    char *mon2[]= {"Jan", "Feb", "Mar", "Apr", "May", "Jue","Jul", 
                     "Aug", "Sep", "Oct", "Nov", "Dec"};
    return(mon2[nn-1]);

}

