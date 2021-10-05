#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float Start,end,hrs,min,sec,sum,sum1,sum2,v,t,s;
    cout << "Data input are integer!." << endl;
    cout << "Enter start Kilometer : ";
    cin >> Start;
    cout << "Enter end kilometer : ";
    cin >> end;
    cout << "Enter time used(hour minute second) : ";
    cin >> hrs >> min >> sec;
    cout << endl;
    t = end-Start;
    sum = hrs*60;
    sum1 = sum+min;
    sum2 = (sum1*60)+sec;
    s = (sum2/60)/60;
    v = t/s;
    cout << "Car traveled " << t << " kilometers" << " hrs " << hrs << " min " << min << " sec "  << sec << endl;
    cout << "Average velocity was " << v << " kph." << endl;
    return(0);


}