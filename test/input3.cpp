#include <iostream>
using namespace std;
int main(){

    int std,i,result;
    cout << "Enter student :";
    cin >> std;

        for (i=1 ; i<=std ; i++){
            //รับค่าคะแนนมาเลยจ๊ะ
        int pro,mid,final,result =0;
            cout << "Enter score project :";
            cin >> pro;
            cout << "Enter score Mid :";
            cin >> mid;
            cout << "Enter score Final :";
            cin >> final;
            //หาผลรวมน้องให้เรียบร้อย
            result = pro+mid+final;
            cout << "Total score : " << result << "\n";
            //เข้าเงื่อนไขเช็คคะแนนเพื่อหาว่าน้องๆได้เกรดไรมั้ง
            if(result>=80){
                cout << "Grade A\n";
            }
            else if(result>= 70 && result <=79){
                cout << "Grade B\n";
            }
            else if(result>= 60 && result <=69){
                cout << "Grade C\n";
            }
            else if(result>= 50 && result <=59){
                cout << "Grade D\n";
            }
            else{
                cout << "Grade F\n";
            //จบฉีก
            }
            
            

            
            

        }
    return(0);
        
    


}