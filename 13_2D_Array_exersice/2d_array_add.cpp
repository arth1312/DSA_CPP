#include<iostream>
using namespace std;
int main()
{
    
    int n;

    cout << "Enter the row & col size: ";
    cin >> n;

    int a[n][n], b[n][n], c[n][n];
    int i, j;
    cout << "Enter array a:" << endl;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cout << "Enter a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    cout << endl << "==================================" << endl;

    cout << "Enter array b:" << endl;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cout << "Enter b[" << i << "][" << j << "]: ";
            cin >> b[i][j];
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    cout << "Enter array c:" << endl;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}