#include<iostream>
using namespace std;
int main()
{
	int i, j, n;
	cout << "Enter the row & column array's size: ";
	cin >> n;
	
	
	int a[n][n];
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			cout << "Enter a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			cout << a[i][j];
		}
		cout << endl;
	}
}