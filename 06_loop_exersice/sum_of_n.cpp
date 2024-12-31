#include<iostream>
using namespace std;
int main()
{
    int i, n, sum;
    sum = 0;

    cout << "Enter of any number: ";
    cin >> n;
    i = 1;
    while(i <= n)
    {
        sum = sum + i;
        i++;
    }
    cout << "Number of value: " << sum;
    
    return 0;
}