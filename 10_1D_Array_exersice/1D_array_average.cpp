#include<iostream>
using namespace std;
int main()
{
    int n, i, sum;
    cout << "Enter size: ";
    cin >> n, sum = 0;

    int a[n];
    for(i = 0; i < n; i++)
    {
        cout << "Enter a[" << i << "]: ";
        cin >> a[i];
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    cout << "Average is: " << sum / n << endl;
    return 0;
}