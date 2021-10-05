#include <iostream>
#include <string>
using namespace std;
int main()
{
    int ct;
    char Ch;
    string Message;
    cout << "Enter character : ";
    cin >> Ch;
    cout << endl;

    if((Ch >= 'A' && Ch <= 'Z') || (Ch >='a' && Ch <='z') || (Ch >='0' && Ch <='9') ){
        if ( Ch >= 'a' && Ch <='z'){
            cout << "\'" << Ch << "\'" << " is lowre character." << endl;

            //เปลี่ยนตัวอักษร
            ct = Ch -32;
            cout << "\'" << Ch << "\'" << " to Upper " << "\'" << char(ct) << "\'";
        }
        else if ( Ch >= 'A' && Ch <= 'Z'){ 
            cout << "\'" << Ch << "\'" << " is upper character." << endl;

            //เปลี่ยนตัวอักษร
            ct = Ch +32;
            cout << "\'" << Ch << "\'" << " to lower " << "\'" << char(ct) << "\'";      
        }
        else cout << Ch << " is digit";
        
    }
    else  Message = "special charecter.";
          cout << Message << endl;
    
    return(0);
}