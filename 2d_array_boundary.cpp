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
    int i, j;
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 4; j++)
        {
            if (i == 0 || i == 4 || j == 0 || j == 4)
            {
                cout << a[i][j] << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    return 0;
}