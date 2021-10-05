#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float f;
    cout << "Enter fahrenheit (F) : ";
    cin >> f;
    cout << " Selce = " << setprecision (4) << (((f-32)*5)/9) << endl;

}