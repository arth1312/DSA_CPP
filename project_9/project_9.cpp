#include<iostream>
using namespace std;

class StackBase
{
	public:
		virtual void push(int value) = 0;
		virtual void pop() = 0;
		virtual void top() = 0;
		virtual bool isEmpty() = 0;
		virtual bool isFull() = 0;
		virtual ~StackBase() {}
};

class Stack : public StackBase
{
	private:
		int* arr;
		int maxSize;
		int topIndex;
		
	public:
		Stack(int size)
		{
			maxSize = size;
			arr = new int [maxSize];
			topIndex = -1;
		}
		
		~Stack()
		{
			delete[] arr;
		}
		
		void push(int value)
		{
			if (isFull())
			{
				cout << "Stack is full! Cannot push" << value << endl;
			}
			else
			{
				arr[topIndex++] = value;
				cout << value << "pushed on to Stack" << endl;
			}
		}
		
		void pop()
		{
			if(isEmpty())
			{
				cout << "Stack is empty! Nothing to pop" << endl;
			}
			else
			{
				cout << arr[topIndex--] << "Stack is poped" << endl;
			}
		}
		
		int top()
		{
			if(isEmpty())
			{
				cout << "Stack is empty!" << endl;
				return -1;
			}
			return arr[topIndex];
		}
		
		bool isEmpty()
		{
			return topIndex == -1;
		}
		
		bool isFull() override
		{
			return topIndex == maxSize - 1;
		}
};

void menu(Stack& stack)
{
	int choice, value;
	while(true)
	{
		cout << endl << "Stack Operation" << endl;
		cout << "Press 1 stack is push" << endl;
		cout << "Press 2 stack is pop" << endl;
		cout << "Press 3 stack is display top" << endl;
		cout << "Press 4 stack is check empty" << endl;
		cout << "Press 5 stack is check full" << endl;
		cout << "Press 0 stack is exit" << endl;
		
		cout << "Enter your choice: ";
		cin >> choice;
		
		switch(choice)
		{
			case 1:
				cout << "Enter the value of push: ";
				cin >> value;
				Stack.push(value);
				break;
			case 2:
				Stack.pop();
				break;
			case 3:
				Stack.top();
				break;
			case 4:
				Stack.isEmpty();
				break;
			case 5:
				Stack.isFull();
				break;
			case 0:
				cout << "Stack is exit" << endl;
				break;
			default:
				cout << "Your invalid choice" << endl;
				break;
		}
	}
}

int main()
{
	int size;
	cout << "Enter Stack size: ";
	cin >> size;
	Stack stack(size);
	menu(stack);
	return 0;
}