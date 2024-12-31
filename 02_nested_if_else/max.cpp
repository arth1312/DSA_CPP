#include<iostream>
using namespace std;
int main()
{
   int a, b, c; 
    cout << "Enter value a, b and c:";
    cin >> a >> b >> c;
    if (a == b && b == c && c == a)
    {
        cout << "All value are same..";
    }
    else
    {
        if (a > b)
        {
            if (a > c)
            {
                cout << "a is max..";
            }
            else
            {
                cout << "c is max..";
            }
            
        }
        else
        {
            if (b > c)
            {
                cout << "b is max..";
            }
            else
            {
                cout << "c is max..";
            }
        }
        
    }
}