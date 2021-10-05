#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    double A,B,C;
    cout << " AX^2 + BX + C = 0" << endl;
    cout << " Enter number A : ";
    cin >> A;
    cout << " Enter number B : ";
    cin >> B;
    cout << " Enter number C : ";
    cin >> C;
    cout << endl;
    cout << " Answer of " << A << "X^2" << B << "X + " << C << "= 0" << endl;
    cout << " Answer 1 = " << setprecision(2) << ((-B) + (sqrt( pow(B,2) - 4 * A * C))) / (2 * A) << endl;
    cout << " Answer 2 = " << setprecision(2) << ((-B) - (sqrt( pow(B,2) - 4 * A * C))) / (2 * A) << endl; 
    cout << " Press any key to continue..." << endl;
    return(0);
}



