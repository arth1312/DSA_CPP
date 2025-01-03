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
	int rowIndex;
    cout << "Enter row number: ";
    cin >> rowIndex;

    cout << "Elements of row " << rowIndex << ": ";
    int rowSum = 0;
    for(j = 0; j < n; j++)
    {
        cout << a[rowIndex][j] << " ";
        rowSum += a[rowIndex][j];
    }
    cout << endl;
    cout << "The sum of row " << rowIndex << ": " << rowSum << endl;

    int colIndex;
    cout << "Enter column number: ";
    cin >> colIndex;

    cout << "Elements of column " << colIndex << ": ";
    int colSum = 0;
    for(i = 0; i < n; i++)
    {
        cout << a[i][colIndex] << " ";
        colSum += a[i][colIndex];
    }
    cout << endl;
    cout << "The sum of column " << colIndex << ": " << colSum << endl;

    return 0;
}