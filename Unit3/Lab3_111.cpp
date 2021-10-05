#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,sum,sum1,sum2,sum3,sum4;
    cout << "Enter binary number : " << endl;
    cin >> a >> b >> c >> d;
    cout << endl;
    sum = (a*2)*3;
    sum1 = (b*2)*2;
    sum2 = (c*1)*1;
    sum3 = (d*0)*0;
    sum4 = sum+sum1+sum2+sum3;
    cout << "Decimal value of " << a << b << c << d << " = " << sum4 << endl;
    return(0);



}