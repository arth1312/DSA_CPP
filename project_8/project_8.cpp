#include <iostream>
using namespace std;

class LinkedList
{
private:
    class Node
    {
    public:
        int data;
        Node* next;
        Node(int val)
        {
            data = val;
            next = nullptr;
        }
    };
    Node* head;
public:
    LinkedList()
    {
        head = nullptr;
    }

    void append(int data)
    {
        Node* newNode = new Node(data);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    
    void display() {
        if (head == nullptr)
        {
            cout << "The list is empty." << endl;
            return;
        }

        Node* temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << " " << endl;
    }

    void insert_at_beginning(int data)
    {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
    
    bool search(int key)
    {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == key) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    void delete_node(int key)
    {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        if (head->data == key) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;
        Node* prev = nullptr;
        while (temp != nullptr && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }

        if (temp == nullptr)
        {
            cout << "Node with value " << key << " not found." << endl;
            return;
        }

        prev->next = temp->next;
        delete temp;
    }

    void reverse()
    {
        Node* prev = nullptr;
        Node* current = head;
        Node* nextNode = nullptr;
        
        while (current != nullptr)
        {
            nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        head = prev;
    }
};

int main()
{
    LinkedList list;
    int choice, value;

    while (true) {
        cout << endl << "Menu:" << endl;
        cout << "1. Append a node" << endl;
        cout << "2. Display the list" << endl;
        cout << "3. Insert at the beginning" << endl;
        cout << "4. Search for a value" << endl;
        cout << "5. Delete a node" << endl;
        cout << "6. Reverse the list" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to append: ";
                cin >> value;
                list.append(value);
                break;
            case 2:
                cout << "Linked List: ";
                list.display();
                break;
            case 3:
                cout << "Enter value to insert at the beginning: ";
                cin >> value;
                list.insert_at_beginning(value);
                break;
            case 4:
                cout << "Enter value to search for: ";
                cin >> value;
                if (list.search(value)) {
                    cout << value << " found in the list." << endl;
                } else {
                    cout << value << " not found in the list." << endl;
                }
                break;
            case 5:
                cout << "Enter value to delete: ";
                cin >> value;
                list.delete_node(value);
                break;
            case 6:
                list.reverse();
                cout << "List reversed." << endl;
                break;
            case 7:
                cout << "Exiting program..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
