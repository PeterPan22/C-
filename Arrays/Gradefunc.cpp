#include <iostream>
//#include <iomanip>
using namespace std;
void Scgrade(float grade[15]);

int main()
{
    int A = 0 , R = 1  ;
    string name[15]; 
    float Class[15];
    float hw[15];
    float test[15];
    float mid[15];
    float final[15];
    char Grade[15];
    float Score[15];

for (A ; A <= R ; A++){
        cout <<"\n Input Name " << A << " : ";
        cin >> name[A];

        cout <<"\n Input Class " << A << " (0-5) : ";
        cin >> Class[A];
        while(Class[A] < 0 || Class[A] > 5 ){
            cout <<"\n Input Class " << A << " : ";
            cin >> Class[A];
        }

        cout <<"\n Input hw " << A << " (0-15) : ";
        cin >> hw[A];
        while(hw[A] < 0 || hw[A] > 15 ){
            cout <<"\n Input hw " << A << " : ";
            cin >> hw[A];
        }

        cout <<"\n Input test " << A << " (0-10) : ";
        cin >> test[A];
        while(test[A] < 0 || test[A] > 10 ){
            cout <<"\n Input test " << A << " : ";
            cin >> test[A];
        }

        cout <<"\n Input mid " << A << " (0-30) : ";
        cin >> mid[A];
        while(mid[A] < 0 || mid[A] > 30 ){
            cout <<"\n Input mid " << A << " : ";
            cin >> mid[A];
        }

        cout <<"\n Input final " << A << " (0-30) : ";
        cin >> final[A];
        while(mid[A] < 0 || final[A] > 30 ){
            cout <<"\n Input final " << A << " : ";
            cin >> final[A];
        }

        //รวมคะแนน
    Score[A] = Class[A] + hw[A] +  test[A] + mid[A] + final[A]; 
    cout <<"Score : "<< Score[A];

    Scgrade( Score[A]);
     for(int i = 0 ;i <= R ; i++){
        cout << endl <<  "Name " << i <<": " << name[i] << endl << " Grade : " << Grade[i] << endl;
    }
    

    return(0);
    }
}

float score( float grade[A] )
{
        
        if(grade[A] <= 100 && grade[A]>= 80 ){
            Grade[A] = 'A';
        }
        else if(grade[A] <= 79 && grade[A] >= 70 ){
            Grade[A] = 'B';
        }
        else if(grade[A]<= 69 && grade[A]>= 60 ){
            Grade[A] = 'C';
        }
        else if(grade[A] <= 59 && grade[A] >= 50){
            Grade[A] = 'D';
        }
        else {
            Grade[A] = 'F';
        }
        cout <<"Grade : "<< Grade[A];

        
}
   