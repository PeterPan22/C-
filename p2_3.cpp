#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int A,B,C;
    double root,total1,total2;

    cout << "AX^2 + BX + C = 0" << endl;
    cout << " Enter number A :";
    cin >> A;
    cout << " Enter number B :";
    cin >> B;
    cout << " Enter number C :";
    cin >> C;
    cout << endl;

    cout << " Answer of " << A <<"X^2 +" << B << " X + " << C << " = 0 " << endl;
    
    root = sqrt(B * B - 4 * A * C);
    total1 = (-B + root) / ( 2 * A );
    total2 = (-B - root) / ( 2 * A );
    cout << "Answer 1 = " << total1 << endl;
    cout << "Answer 2 = " << total2 << endl;
    return(0);