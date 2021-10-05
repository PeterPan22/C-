#include <iostream>
using namespace std;
int main(){
    int std,i,result;
    cout << "Enter student :";
    cin >> std;
        while(i<=std){
        int inroom,hw,test,mid,final;
            cout << "Enter score inroom :";
            cin >> inroom;
            cout << "Enter score HW :";
            cin >> hw;
            cout << "Enter score Test :";
            cin >> test;
            cout << "Enter score Mid :";
            cin >> mid;
            cout << "Enter score Final :";
            cin >> final;

            result = inroom+hw+test+mid+final;

            if(result>= 80 && result <=100){
                cout << "A";
            }
            else if(result>= 70 && result <=79){
                cout << "B";
            }
            else if(result>= 60 && result <=69){
                cout << "C";
            }
            else if(result>= 50 && result <=59){
                cout << "D";
            }else{
                cout << "F";
                cout << "std :" << std;
            }
            i+=1;
            

        }
    return(0);
        
    


}