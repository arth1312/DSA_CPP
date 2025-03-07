#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList() { head = nullptr; }

    void insertAtBeginning(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;
        
        temp->next = newNode;
    }

    void deleteNode(int value) {
        if (head == nullptr) {
            cout << "List is empty!\n";
            return;
        }

        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;
        Node* prev = nullptr;
        while (temp != nullptr && temp->data != value) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Value not found in the list!\n";
            return;
        }

        prev->next = temp->next;
        delete temp;
    }

    void display() {
        Node* temp = head;
        if (!temp) {
            cout << "List is empty!\n";
            return;
        }
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int i = 0; i < n2; i++) R[i] = arr[mid + 1 + i];

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

int partition(int arr[], int low, int high) {
    int pivot = arr[high], i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot)
            swap(arr[++i], arr[j]);
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int binarySearch(int arr[], int size, int key) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

void menu() {
    LinkedList list;
    int choice, value, size, arr[100];

    do {
        cout << "1. Insert at Beginning (Linked List)" << endl;
        cout << "2. Insert at End (Linked List)" << endl;
        cout << "3. Delete a Node (Linked List)" << endl;
        cout << "4. Display Linked List" << endl;
        cout << "5. Sort an Array (Merge Sort or Quick Sort)" << endl;
        cout << "6. Binary Search in Sorted Array" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            list.insertAtBeginning(value);
            break;
        case 2:
            cout << "Enter value: ";
            cin >> value;
            list.insertAtEnd(value);
            break;
        case 3:
            cout << "Enter value to delete: ";
            cin >> value;
            list.deleteNode(value);
            break;
        case 4:
            list.display();
            break;
        case 5:
            cout << "Enter the size of the array: ";
            cin >> size;
            cout << "Enter " << size << " elements: ";
            for (int i = 0; i < size; i++) cin >> arr[i];

            cout << "Choose Sorting Algorithm:\n1. Merge Sort\n2. Quick Sort" << endl;
            int sortChoice;
            cin >> sortChoice;

            if (sortChoice == 1) mergeSort(arr, 0, size - 1);
            else quickSort(arr, 0, size - 1);

            cout << "Sorted Array: ";
            for (int i = 0; i < size; i++) cout << arr[i] << " ";
            cout << endl;
            break;
        case 6:
            cout << "Enter the size of the sorted array: ";
            cin >> size;
            cout << "Enter " << size << " sorted elements: ";
            for (int i = 0; i < size; i++) cin >> arr[i];

            cout << "Enter value to search: ";
            cin >> value;
            int result = binarySearch(arr, size, value);
            if (result != -1) cout << "Value found at index " << result << endl;
            else cout << "Value not found!" << endl;
            break;
        case 7:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 0);
}

int main() {
    menu();
    return 0;
}
