#include <iostream>
using namespace std;
int main()
{
    int fish,tomato,result;
    int fishsult,tomasult;
    float fishtal,tomatal,mintal;
    
    cout << "Enter fish : ";
    cin >> fish;
    cout << "Enter tomato : ";
    cin >> tomato;

    fishsult = fish/3;
    tomasult = tomato/2;
    mintal = min(fishsult,tomasult);
    cout << "show : " << mintal << endl;

    fishtal = (mintal*3)-fishsult;
    tomatal = (mintal*2)-tomasult;
    cout << "fish result : " << fishtal << " tomato result : " << tomatal << endl;
     
}