#include<iostream>
using namespace std;
int main()
{
    int a[5][5] = 
    {
        {4, 9, 3, 5, 2},
        {8, 3, 7, 4, 8},
        {2, 5, 1, 3, 6},
        {6, 4, 9, 4, 3},
        {8, 2, 1, 7, 9} 
    };
    int length = sizeof(a) / sizeof(a[0][0]);
    int sum = 0;
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 4; j++)
        {
            sum = sum + a[i][j];
        }
    }
    cout << "Average is: " << sum / length << endl;
    
    return 0;
}