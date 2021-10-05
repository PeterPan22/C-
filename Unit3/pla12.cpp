#include <iostream>
using namespace std;
int main()
{
    int fish,tomato,result;
    float fishtal,tomatal,mintal;
   
    fish = 100/3;
    tomato = 500/2;
    result = min(fish,tomato);
    cout << "show : " << result << endl;

    fishtal = 100-(result*3);
    tomatal = 500-(result*2);
    cout << "fish result : " << fishtal << " tomato result : " << tomatal << endl;
     
}