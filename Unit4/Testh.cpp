#include <iostream>
#include <string>
using namespace std;
int main(){
    int area,area_cal,area_all,sum;
    int chart_1 = 200000;
    int chart_2 = 150000;
    char mat,size;
    cout << "Enter the area ";
    cin >> area;
    cout << "Enter type of the material : ";
    cin >> mat;

    //หาพื้นที่ใช้สอย
    if(area>=20 &&area <=40){
        size ='S';
        area_all = 200000;

    }else if (area >= 41 && area <=100){
        size = 'M';
        area_cal = area-40;
        area_all = chart_1+(area_cal*3000);
    }else if (area >101){
        size = 'L';
        area_cal = area-100;
        area_all = chart_1+chart_2+(area_cal*2000);

    }else{
        cout << "Eorror";
    }
    //คุณภาพของวัสดุ
    switch(mat)
    {
        case'B':
            if (size == 'S'){
                area= area*5000;
            }else if (size == 'M'){
                area= area*7500;
                sum = area_all+area;
                
            }else if (size == 'L'){
                area= area*15000;
                sum = area_all+area;
            }else{
            cout << "Eorror";
    }
        break;
            
        case 'G':
            if (size == 'M'){
                area= area*10000;
                sum = area_all+area;

            }else if (size == 'L'){
                area= area*20000;
                sum = area_all+area;
            }
            break;
        case 'P':
            if (size == 'M'){
                area= area*15000;
                sum = area_all+area;
            }else if (size == 'L'){
                area= area*30000;
                sum = area_all+area;
                
            }
            break;
        default:
            cout << "Error!";
            break;

        }
       cout << "The house will cost " << sum << " baht to build";

        
}


