#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter value a and b:";
    cin >> a >> b;
    (a < b)
        ? cout << "a is minimum.."
        : cout << "b is minimum..";
    return 0;
}