#include<iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter size: ";
    cin >> n;

    int a[n], b[n], c[n];
    for(i = 0; i < n; i++)
    {
        cout << "Enter a[" << i << "]: ";
        cin >> a[i];
    }
    for(i = 0; i < n; i++)
    {
        cout << "Enter b[" << i << "]: ";
        cin >> b[i];
    }

    for(i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
    }
    cout << endl << "Array c: ";
    for(i = 0; i < n; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}