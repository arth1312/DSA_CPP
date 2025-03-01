#include<iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
	for(int i = 0; i < n-1; i++)
	{
		int minIdx = i;
		for(int j = i+1; j < n; j++)
		{
			if(arr[j] < arr[minIdx])
			{
				minIdx = j;
			}
		}
		swap(arr[i], arr[minIdx]);
	}
}

void mergeSort(int arr[], int left, int right)
{
	if(left < right)
	{
		int mid = left + (right - left) / 2;
		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);
		merge(arr, left, mid, right);
	}
}

int linearSearch(int arr[], int n, int key)
{
	for(int i = 0; i < n; i++)
	{
		if(arr[i] == key)
			return i;
	}
	return -1;
}

int binarySearch(int arr[], int left, int right, int key)
{
	if(left <= right)
	{
		int mid = left + (right - left) / 2;
		{
			if(arr[mid] == key)
				return mid;
			if(arr[mid] > key)
				return binarySearch(arr, mid + 1, right, key);
		}
	}
}

void displaySort(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int choice, size, key, index;
	cout << "Enter the number of size: ";
	cin >> size;
	
	int arr[size];
	
	cout << "Enter the element: ";
	for(int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	
	do
	{
		cout << "Press 1 Selection Sort" << endl;
		cout << "Press 2 Merge Sort" << endl;
		cout << "Press 3 Linear Search Sort" << endl;
		cout << "Press 4 Binary Search Sort" << endl;
		cout << "Press 5 Display Sort" << endl;
		cout << "Press 0 Exit" << endl;
		
		cout << "Enter your choice: ";
		cin >> choice;
		
		switch(choice)
		{
			case 1:
				selectionSort(arr, size);
				cout << "Sorted by Selection Sort" << endl;
			break;
			case 2:
				mergeSort(arr , 0, size - 1);
				cout << "Sorted by Merge Sort" << endl;
			break;
			case 3:
				cout << "Enter the element of search: ";
				cin >> key;
				linearSearch(arr, size, key);
				if(index != -1)
				{
					cout << "Element found index: " << index << endl;
				}
				else
				{
					cout << "Element not found index" << endl;
				}
			break;
			case 4:
				cout << "Enter the element of search: ";
				cin >> key;
				binarySearch(arr, 0, size - 1, key);
				if(index != -1)
				{
					cout << "Element found index: " << index << endl;
				}
				else
				{
					cout << "Element not found index" << endl;
				}
			break;
			case 5:
				cout << "Current sort: ";
				displaySort(arr, size);
			break;
			case 0:
			break;
			default:
				cout << "Your Invalid Choice" << endl;
			break;
		}
	}while(choice != 0);
	return 0;
}