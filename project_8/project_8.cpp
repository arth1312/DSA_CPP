#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node* next;
		
	Node(int value)
	{
		data = value;
		next = nullptr;
	}	
};

class LinkedList
{
	private:
		Node* head;
		
	public:
		LinkedList()
		{
			head = nullptr;
		}
		
		void append(int data)
		{
			Node* newNode = new Node(data);
			if(head == nullptr)
			{
				head = newNode;
				return;
			}
			Node* temp = head;
			while(temp->next != nullptr)
			{
				temp = temp->next;
			}
			temp->next = newNode;
		}
		
		void insert_at_beginning(int data)
		{
			Node* newNode = new Node(data);
			newNode->next = heade;
			head = newNode;
		}
		
		bool search(int key)
		{
			Node* temp = head;
			while(temp != nullptr)
			{
				if(temp->data == key)
				{
					return true;
					temp = temp->next;
				}
				return false;
			}
		}
		
		void delete_node(int key)
		{
			if(head == nullptr)
				return;
				
			if(head->data == key)
			{
				Node* temp = head;
				head = head->next;
				delete temp;
				return;
			}
			
			Node* temp = heade;
			while(temp->next != nullptr && temp->next->data != key)
			{
				temp = temp->next;
			}
			
			if(temp->next == nullptr)
				return;
				
			Node* nodeToDelete = temp->next;
			temp->next = temp->next->next;
			delete nodeToDelete;
		}
		
		void reverse()
		{
			Node* prev = nullptr;
			Node* current = head;
			Node* next = nullptr;
			
			while(current != nullptr)
			{
				next = current->next;
				current->next = prev;
				prev = current;
				current = next;
			}
			head = prev;
		}
		
		void display()
		{
			Node * temp = head;
			while(temp != nullptr)
			{
				cout << temp->data << " ";
				temp = temp->next;
			}
			cout << "NULL" << endl;
		}
};

int main()
{
	
	return 0;
}