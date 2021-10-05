#include <iostream>
using namespace std;
int main()
{
    int a,b,c,sum;
    cout << "Enter score midterm :";
    cin >> a;
    while(a < 0 || a > 100){
        cout << "Enter score mid-term (100) : ";
        cin >> a;
    }
    cout << "Enter score final :";
    cin >> b;
    while(b <0 || b >100){
        cout << "Enter scoor final (100) : ";
        cin >> b;
    }
    cout << "Enter score homework :";
    cin >> c;
    while(c <0 || c >=10){
        cout << "Enter score WH (10) :";
        cin >> c;
    }
    sum =((a*40)/100)+((b*50)/100)+((c*10)/10);
        cout << "score is all : " << sum << endl;
    
    
    if((sum>=90) && (sum<=100)){
        cout << "Grade = 'A'";
    }
    else if((sum>=85) && (sum<=89)){
        cout << "Grade = 'B+'";
    }
    else if((sum>=80) && (sum<=84)){
        cout << "Grade = 'B'";
    }
    else if((sum>=75) && (sum<=79)){
        cout << "Grade = 'C+'";
    }
    else if((sum>=70) && (sum<=74)){
        cout << "Grade = 'C'";
    }
    else if((sum>=65) && (sum<=69)){
        cout << "Grade = 'D+'";
    }
    else if((sum>=50) && (sum<=59)){
        cout << "Grade = 'D'";
    }
    else
        cout << "Grade = 'F'";
    return(0);
}