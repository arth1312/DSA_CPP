#include<iostream>
using namespace std;
int main()
{
    int i, n;
    

    cout << "Enter of any number: ";
    cin >> n;
    i = 1;
    while(i <= n)
    {
        if(n%i == 0)
        {
            cout << i << endl;
        }
        i++;
    }
    return 0;
}