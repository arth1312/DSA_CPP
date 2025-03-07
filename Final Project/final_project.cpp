#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

class Linkedlist
{
	private:
		Node* head;
		
	public:
		Linkedlist()
		{
			head = nullptr;
		}
		
		void insert(int value)
		{	
			Node* newNode = new Node;
			
			if(!head)
			{
				head = newNode;
				return;
			}
			Node* temp = head;
			while(temp->next)
				temp = temp->next;
				
			temp->next = newNode;
		}
		
		void display()
		{
			if(!head)
			{
				cout << "List is empty" << endl;
				return;
			}
			Node* temp = head;
			while(temp)
			{
				cout << temp->data << " ";
				temp = temp->next;
			}
			cout << "NULL" << endl;
		}
		
		void merge(int value, int size = 0)
		{
			Node* newNode = new Node;
			
			if(!head)
			{
				head = newNode;
				return;
			}
			Node* temp = head;
			while(temp->next)
				temp = temp->next;
				
			temp->next = newNode;
		}
		
		void quick(int value, int size = 0)
		{
			Node* newNode = new Node;
			
			if(!head)
			{
				head = newNode;
				return;
			}
			Node* temp = head;
			while(temp->next)
				temp = temp->next;
		}
		
		void search(int value, int size = 0)
		{
			Node* newNode = new Node;
			
			if(!head)
			{
				head = newNode;
				return;
			}
			Node* temp = head;
			while(temp->next)
				temp->data = newNode;
		}
};

int main()
{
	Linkedlist list;
	int choice, value, size = 0, arr[100];
	
	do
	{
		cout << "Press 1 Insert Linked list" << endl;
		cout << "Press 2 Display Linked list" << endl;
		cout << "Press 3 Merge Sort" << endl;
		cout << "Press 4 Quick Sort" << endl;
		cout << "Press 5 Binary Search" << endl;
		cout << "Press 0 Exit" << endl;
		
		cout << "Enter your choice: ";
		cin >> choice;
		
		switch(choice)
		{
			case 1:
				cout << "Enter the value of insert: ";
				cin >> value;
				list.insert(value);
			break;
			case 2:
				list.display();
			break;
			case 3:	
				list.merge(value, size = 0);
				for(int i = 0; i < size; i++)
				{
					cout << "Sorted by Merge Sort" << endl;
				}
			break;
			case 4 :
				list.quick(value, size = 0);
				for(int i = 0; i < size; i++)
				{
					cout << "Sorted by Quick Sort" << endl;
				}
			break;
			case 5 :
				list.search(value, size = 0);
				for(int i = 0; i < size; i++)
				{
					cout << "Search by Binary Search" << endl;
				}
			break;
			case 0:
				cout << "Exit your program.." << endl; 
			break;
			default:
				cout << "Invalid your choice" << endl;
			break;
		}
	}while(choice != 0);
	
	return 0;
}
