#include <iostream>

using namespace std;

// Linked List Node
struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

// Linked List Class
class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // Add a node to the end of the list
    void append(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            return;
        }
        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }

    // Display the linked list
    void display() {
        Node* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    int getLength() {
        int length = 0;
        Node* current = head;
        while (current) {
            length++;
            current = current->next;
        }
        return length;
    }

    int* toArray() {
        int length = getLength();
        if (length == 0) return nullptr;

        int* arr = new int[length];
        Node* current = head;
        for (int i = 0; i < length; i++) {
            arr[i] = current->data;
            current = current->next;
        }
        return arr;
    }

    ~LinkedList() {
        Node* current = head;
        while (current) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    }
};

void merge(int* arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int* L = new int[n1];
    int* R = new int[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    delete[] L;
    delete[] R;
}

void mergeSort(int* arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int partition(int* arr, int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int* arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int binarySearch(int* arr, int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; // Not found
}

int main() {
    LinkedList list;
    int* array = nullptr;
    int arraySize = 0;
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Append to Linked List\n";
        cout << "2. Display Linked List\n";
        cout << "3. Array Sorting (Merge Sort)\n";
        cout << "4. Array Sorting (Quick Sort)\n";
        cout << "5. Binary Search\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int value;
                cout << "Enter value to append: ";
                cin >> value;
                list.append(value);
                break;
            }
            case 2: {
                cout << "Linked List: ";
                list.display();
                break;
            }
            case 3: {
                if (array != nullptr) delete[] array;
                array = list.toArray();
                arraySize = list.getLength();
                if (arraySize > 0) {
                    mergeSort(array, 0, arraySize - 1);
                    cout << "Sorted array (Merge Sort): ";
                    for (int i = 0; i < arraySize; i++) {
                        cout << array[i] << " ";
                    }
                    cout << endl;
                } else {
                    cout << "Linked list is empty." << endl;
                }
                break;
            }
            case 4: {
                if (array != nullptr) delete[] array;
                array = list.toArray();
                arraySize = list.getLength();
                if (arraySize > 0) {
                    quickSort(array, 0, arraySize - 1);
                    cout << "Sorted array (Quick Sort): ";
                    for (int i = 0; i < arraySize; i++) {
                        cout << array[i] << " ";
                    }
                    cout << endl;
                } else {
                    cout << "Linked list is empty." << endl;
                }
                break;
            }
            case 5: {
                if (array != nullptr && arraySize > 0) {
                    int searchVal;
                    cout << "Enter value to search: ";
                    cin >> searchVal;
                    mergeSort(array, 0, arraySize - 1);
                    int index = binarySearch(array, arraySize, searchVal);
                    if (index != -1) {
                        cout << "Value found at index: " << index << endl;
                    } else {
                        cout << "Value not found." << endl;
                    }
                } else {
                    cout << "Array is empty." << endl;
                }
                break;
            }
        }
    } while (choice != 0);

    delete[] array;
    return 0;
}
