#include <iostream>
using namespace std;


int number[12],number1[12];
 bool ans;
 bool symath(int *number[],int *number1[]);



int main(){
    
    int count =12;
    
    {
    cout << " Enter 13 integer : ";
    cin >> number[0]>> number[1]>>number[2]>>number[3]>>number[4] >> number[5] >> number[6]>>
    number[7] >> number[8] >> number[9] >> number[10] >> number[11] >> number[12];
    }


    for (int i = 0; i <= 12 ; count-- )
    {
        number[count]=number1[i];
    }
    
    for (int i = 0; i <= 12; i++)
    {
        cout << number1[i] << "";
    }
    

    if( symath(number,number1)==1){
        cout << "Symmetry" ;
    }
    else
    
        cout << "No Symmetry";
    

    return(0);

}
bool symath(int number[],int number1[]){

    for (int n  = 0 ; n <=(13/2)  ; n++)
    {
       
        if (number[n] == number1[n])
        {
            ans = true;
        }else{
            ans  = false;
            break;
        }
    }

    return (ans);
        
        
        
    
    
}
