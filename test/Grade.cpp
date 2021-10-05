#include <iostream>
using namespace std;
int main()
{
    int score;
    cout << "Enter score " ;
    cin >> score;

    if(score>=80){
        cout <<"Grade A";
    }
    else if (score>=70 &&score<=79 ){
        cout << "Grade B";
    }
    else if (score>=60 &&score<=69 ){
        cout << "Grade c";
    }
    else if (score>=50 &&score<=59 ){
        cout << "Grade D";
    }
    else{
        cout << "Grade F";
    }
    return(0);
}
