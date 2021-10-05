#include <iostream>
using namespace std;
int main(){
    int pro,mid,fi,Total;
    char err='N',Grade;

    cout << "Enter score project :";
    cin >> pro;
    cout << "Enter score midtrem :";
    cin >> mid;
    cout << "Enter score final :";
    cin >> fi;

    if(pro >= 20 || pro< 0){ 
        cout << "project score error !!!\n";
        err ='Y';
    }

    if (mid >= 30 || mid < 0){
        cout << "Mdterm score error !!!\n";
        err ='Y';
    }
    
    if (fi >= 50 || fi < 0){
        cout << "Final score error !!!\n";
        err ='Y';
    }
    
    

    //ผลรวมของคะแนน
    if(err=='N'){
     Total = pro+mid+fi;

        if(Total>=80){
            Grade = 'A';
        }
        else if (Total>=70 && Total<=79 ){
            Grade = 'B';
        }
        else if (Total>=60 && Total<=69 ){
            Grade = 'C';
        }
        else if (Total>=50 && Total<=59 ){
            Grade = 'D';
        }
        else{
           Grade = 'F';
        }
    
        
    }
        cout << "Total result :" << Total <<"\n";
        cout << "Grade :" << Grade << endl;
    return(0); 
    
}