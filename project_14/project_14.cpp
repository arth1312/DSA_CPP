#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }

    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) return i;
    }
    return -1;
}

int binarySearch(int arr[], int left, int right, int key) {
    if (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] > key) return binarySearch(arr, left, mid - 1, key);
        return binarySearch(arr, mid + 1, right, key);
    }
    return -1;
}

void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    int size, choice, key, index;

    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    do {
        cout << "1. Selection Sort" << endl;
        cout << "2. Merge Sort" << endl;
        cout << "3. Linear Search\n";
        cout << "4. Binary Search" << endl;
        cout << "5. Display Array" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                selectionSort(arr, size);
                cout << "Array sorted using Selection Sort." << endl;
                break;
            case 2:
                mergeSort(arr, 0, size - 1);
                cout << "Array sorted using Merge Sort." << endl;
                break;
            case 3:
                cout << "Enter the element to search: ";
                cin >> key;
                index = linearSearch(arr, size, key);
                if (index != -1)
                    cout << "Element found at index: " << index << endl;
                else
                    cout << "Element not found." << endl;
                break;
            case 4:
                cout << "Enter the element to search: ";
                cin >> key;
                index = binarySearch(arr, 0, size - 1, key);
                if (index != -1)
                    cout << "Element found at index: " << index << endl;
                else
                    cout << "Element not found." << endl;
                break;
            case 5:
                cout << "Current array: ";
                displayArray(arr, size);
                break;
            case 0:
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}
