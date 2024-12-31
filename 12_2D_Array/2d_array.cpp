#include<iostream>
using namespace std;

int main()
{
    int row, column;
    
    cout << "Enter the row: ";
    cin >> row;

    cout << "Enter the column: ";
    cin >> column;

    int a[row][column];
    int i, j;
    
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            cout << "Enter array a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    cout << endl << endl << "=======================" << endl << endl;

    cout << "Array Value: " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
