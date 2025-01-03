#include<iostream>
using namespace std;
int main()
{
	int i, size, n;
	cout << "Enter the array's size: ";
	cin >> size;
	
	int a[size];
	for(i = 0; i < size; i++)
	{
		cout << "Enter a[" << i << "]: ";
		cin >> a[i];
	}
	cout << "Negative elements from an Array: ";
	for(i = 0; i < size; i++)
	{
		if(a[i] < 0)
		{
			cout << a[i] << " ";
		}
	}
}