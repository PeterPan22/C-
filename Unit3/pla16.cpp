#include <iostream>
using namespace std;
int main()
{
    int x,y,fishsult,tomasult;
    float fishtal,tomatal,mintal;
    
    cout << "Enter fish : ";
    cin >> x;
    cout << "Enter tomato : ";
    cin >> y;

    fishsult = x/3;
    tomasult = y/2;
    mintal = min(fishsult,tomasult);
    cout << "show : " << mintal << endl;

    fishtal = (mintal*3)-fishsult;
    tomatal = (mintal*2)-tomasult;
    cout << "fish result : " << fishtal << " tomato result : " << tomatal << endl;
    return(0);
}