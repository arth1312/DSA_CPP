#include<iostream>
using namespace std;
int main()
{
    int i, n, fact;
    i = 1;

    cout << "Enter of any number: ";
    cin >> n;
    fact = 1;
    while(i <= n)
    {
        fact = fact * n;
        n--;
    }
    cout << "Number of value: " << fact;
    
    return 0;
}