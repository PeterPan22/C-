// This Program create and used array 1 Dimension
#include <iostream>
#include <iomanip>
using namespace std;

string messen;

int isPalindrome(string messen);

int main()
{
    cout <<"Enter text : " ;
    cin >> messen;

    if(isPalindrome(messen) == true){
        cout << "Your text is Palindrome." ;
    }else{
        cout << "Your text is not Palindrome.";
    }

    return(0);
}

int isPalindrome(string messen){

    bool ans; 
    
    for(int i = 0; i <= (messen.length()/2)-1 ; i++){
    
    int backloop = (messen.length() -1) - i ;

        if( messen[i] ==  messen[backloop] ){
            cout << messen[i] << " = " << messen[backloop] << endl;
            ans = true;
        }else{
            cout << messen[i] << " = " << messen[backloop]  << endl;
            ans = false;
            break;
        }
    }

    return (ans);
}
