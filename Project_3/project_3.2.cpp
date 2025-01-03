#include<iostream>
using namespace std;
int main()
{
	int i, j, row, column;
	cout << "Enter the row array's size: ";
	cin >> row;
	cout << "Enter the column array's size: ";
	cin >> column;
	
	int a[row][column];
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < column; j++)
		{
			cout << "Enter a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
	cout << "The largest element is: ";
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < column; j++)
		{
			if(a[i][j] > 0)
			{
				cout << a[i][j] << " ";
			}
		}
	}
}