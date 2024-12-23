#include<iostream>
using namespace std;
int main()
{
    int size;
    int i;
    
    cout << "Enter the size of the array: ";
    cin >> size;
    int a[size];
    
    for (i = 0; i < size; i++)
    {
        cout << "Enter the elements of the array: ";
        cin >> a[i];
    }

    cout << "The elements of the array are: ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}