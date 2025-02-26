#include <iostream>
using namespace std;

class Stack {
protected:
    int* arr;     
    int topIndex;  
    int capacity;  

public:
    Stack(int size) {
        capacity = size;
        arr = new int[capacity];
        topIndex = -1;
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack is full! Cannot push " << value << endl;
            return;
        }
        arr[++topIndex] = value;
        cout << value << " pushed onto the stack." << endl;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack is empty! Cannot pop." << endl;
            return -1;
        }
        return arr[topIndex--];
    }

    int top() {
        if (isEmpty()) {
            cout << "Stack is empty! No top element." << endl;
            return -1;
        }
        return arr[topIndex];
    }

    bool isEmpty() {
        return topIndex == -1;
    }

    bool isFull() {
        return topIndex == capacity - 1;
    }

    ~Stack() {
        delete[] arr;
    }
};

class CustomStack : public Stack {
public:
    CustomStack(int size) : Stack(size) {}

    void push() {
        if (isFull()) {
            cout << "Stack is full! Cannot push." << endl;
            return;
        }
        int value;
        cout << "Enter a value to push: ";
        cin >> value;
        Stack::push(value);
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty! Nothing to pop." << endl;
        } else {
            cout << "Popped value: " << Stack::pop() << endl;
        }
    }

    void displayTop() {
        int topValue = Stack::top();
        if (topValue != -1) {
            cout << "Top element: " << topValue << endl;
        }
    }

    void checkEmpty() {
        cout << (isEmpty() ? "Stack is empty." : "Stack is not empty.") << endl;
    }

    void checkFull() {
        cout << (isFull() ? "Stack is full." : "Stack is not full.") << endl;
    }
};

int main() {
    int size;
    cout << "Enter stack size: ";
    cin >> size;

    CustomStack myStack(size);
    int choice;

    while (true) {
        cout << "\nStack Operations Menu:\n";
        cout << "1. Push\n2. Pop\n3. Display Top\n4. Check if Empty\n5. Check if Full\n6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: myStack.push(); break;
            case 2: myStack.pop(); break;
            case 3: myStack.displayTop(); break;
            case 4: myStack.checkEmpty(); break;
            case 5: myStack.checkFull(); break;
            case 6: cout << "Exiting program...\n"; return 0;
            default: cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}
