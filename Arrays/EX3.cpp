#include <iostream>
#include <iomanip>
#include <string>  
#include <time.h>
using namespace std;

int getdata(string stdData[][3], float score[][4],const int NumStd);
void sortdata();
void average(int std_number);
void displaydata(int std_number);


int main()
{
    const int NumStd = 2;
    string stdData[NumStd][3];
    float score[NumStd+1][4];

    getdata(stdData, score,NumStd);
    return(0);

}
int getdata(string stdData[][3], float score[][4],const int NumStd)
{
 
    for (int i = 0; i < NumStd ; i++)
    {
        cout << "Enter ID " << i+1 <<":" << endl;
        cin >> stdData[i][0];
        cout << "Enter Name : ";
        cin >> stdData[i][1];
        cout << "show" << stdData[i][0] << "show name " << stdData[i][1];
    }
     srand((unsigned int)time(0));
    for (int i = 0; i < NumStd ; i++)
    {
        float sum = 0;
        for (int n = 0; n < 3; n++)
        {
            score[i][n] = (float)(rand() % 101);
            sum += score[i][n];
        }
        score[i][3] = sum;
    }

    return(stdData[i][0],stdData[i][1],score[i][3] );
    
    
}

