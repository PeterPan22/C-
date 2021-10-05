#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int Choice;
    float redius,pi=3.14,circum=0,area=0;
    double volume =0;
    cout << "Enter the number radius : " << endl;
    cin >> redius;

    cout << "  1. Calculate the cimrcumference clrcle"<< endl;
    cout << "  2. Calculate the area of circle "<< endl;
    cout << "  3. Calculate the volume of phrer"<< endl;

    cout << "Enter the choice : ";
    cin >> Choice;

    switch (Choice) {
        case 1: circum = 0.2* pi * redius;
                cout << "circum of circle is = "<< circum; 
                break;
        case 2: area = pi*pow(redius,2);
                cout << "Area of circle  is "<< area;  
                break;
        case 3: volume = (4.0/3.0)*pi*pow(redius,3);
                cout << "Volume of circle is "<< volume;
                break;
        default: cout << "Please an choice again......" << endl; 
    }

        return(0);
}