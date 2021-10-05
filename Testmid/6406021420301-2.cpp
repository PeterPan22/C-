/*บริษัทดอดคอมจ่ายค่าจ้างให้พนักงาน1000 บาทต่อสัปดาห์
และมีค่าคอมมิชชันตามเปอร์เซ็นต์ที่ได้รับจากยอดขายหากมียอดขายเกิน 10000 บาทต่อสัปดาห์
แต่หากมียอดขายตํ่ากว่า 10000 บาทต่อสัปดาห์จะถูกหักค่าจ้างตามสัดส่วนเช่นกัน*/
#include<iostream>
using namespace std;
int main(){

    float book,toy,model,stationery,all;
    float salary;
    cout<< "Input number of books : ";
    cin >> book;
    cout << "Input number toys :";
    cin >> toy;
    cout << "Input number models : ";
    cin >> model;
    cout << "Input number stationery :";
    cin >> stationery;
    cout << endl;

    all=((book*120)+(toy*80)+(model*50)+(stationery*15));
    if(all==0){
        salary = 1000-((1000*50)/100);
    }
    else if(all >= 1&& all <= 4999){
        salary = 1000-((all*10)/100);
    }
    else if(all >= 5000 && all <= 9999){
        salary = 1000+(all-all);
    }
    else if(all >= 10000 && all <= 99999){
        salary = 1000+((all*5)/100);
    }
    else if(all >= 100000){
        salary = 10000+((all*10)/100);
    }
    else {
        cout << "Please agin" << endl;

    }
    cout << "Payment :" << salary << endl;
    return(0);


    

}