#include<iostream>
using namespace std;
int main()
{
	int i, j, n;
	cout << "Enter the row & column array's size: ";
	cin >> n;
	
	
	int a[n][n], transpose[n][n];
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			cout << "Enter a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
	for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }
    cout << "The transpose matrix of an array:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}