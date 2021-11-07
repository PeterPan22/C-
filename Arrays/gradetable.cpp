#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int student[];

int Calgrade(int Std,int x);

int main(){


    int Std,x;

    cout << " Input student : ";
    cin >> Std;

    srand((unsigned int) time(0));
    x=rand()%100;
    int student[Std];
    Calgrade(Std,x);

}


int Calgrade( int Std,int x){
    for (int i = 0; i < student[Std]-1 ; i++)
    {
        for (int a = 0; a <= x ; a++)
        {
            
        }
        
    }
    

}
