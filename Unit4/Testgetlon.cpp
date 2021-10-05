#include <iostream>
using namespace std;
int main(){

    float petroleum,mileage;
    float useoil,gollon_liter,mil_gilo,litpergolo,mil_use,distance;
    
    cout << "input petroleum used : ";
    cin >> petroleum;
    cout << "input mileage : ";
    cin >> mileage;

    useoil = mileage / petroleum ;
    cout << "(1) Fuel economy = " << useoil << " Miles per gallon(MPG)\n";

    gollon_liter = petroleum *4.5461;
    mil_gilo= mileage * 1.6093;
    litpergolo = gollon_liter / mil_gilo;
    cout << "(2) The car will use " << litpergolo << " Liter per kilometer\n";

    mil_use = useoil * litpergolo;
    distance = useoil / mil_use;
    cout << "(3) Fuel economy = " << distance << " Kilometers per liper (km/l)\n";
    return(0);



}