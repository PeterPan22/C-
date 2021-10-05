#include <iostream>
#include <string>
using namespace std;

int main(){
    char choice;
    float RectsngleArea,TriangleArea,sum;
    cout << "Program calculate area :\n";
    cout << "1.Rectsngle Area\n";
    cout << "2.Triangle Area\n";
    cout << "Enter your shoose number\n";
    cin >> choice;
    cout << endl;

    if (choice == '1'){
        float width, length;
        cout << "Enter width, length = ";
        cin >>  width >> length;
        RectsngleArea = width*length;
        cout << "Rectsngle Area is :" << RectsngleArea;

    }else if(choice== '2'){
        float base, height ;
        cout << "Enter base, height = ";
        cin >> base >> height;
        TriangleArea = 0.5*base*height;
        cout << "Triangle Area is :" << TriangleArea;

    }else
        cout << "กรุณาใส่ตัวเลือกมี่ถูกต้องนะจ๊ะ" << endl;
    return(0);

    

    }
