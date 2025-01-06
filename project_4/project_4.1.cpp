#include<iostream>
using namespace std;
void calculator()
{
	cout << "Press 1 for +" << endl;
	cout << "Press 2 for -" << endl;
	cout << "Press 3 for *" << endl;
	cout << "Press 4 for /" << endl;
	cout << "Press 5 for %" << endl;
	cout << "Press 0 for the exit" << endl;
	int choice;
	cout << "Enter your choice: ";
	cin >> choice;
	int first, second;
	cout << "Enter the first number: ";
	cin >> first;
	cout << "Enter the second number: ";
	cin >> second;
	int sum = 0;
	do
	{
		switch(choice)
		{
			case 1:	
				cout << "Addition of "<< first <<"and "<< second <<" is " << first + second << endl;
			break;
			
			case 2:
				cout << "Subtraction of "<< first <<"and "<< second <<" is " << first - second << endl;
			break;
			
			case 3:
				cout << "Multiplication of "<< first <<"and "<< second <<" is " << first * second << endl;
			break;
			
			case 4:
				cout << "Division of "<< first <<"and "<< second <<" is " << first / second << endl;
			break;
			
			case 5:
				cout << "Moduls of "<< first <<"and "<< second <<" is " << first % second << endl;
			break;
			
			case 0:
			break;
			
			default:
				cout << "Enter valid choice" <<endl;
			break;
		}
	} while(choice != 0);
}
int main()
{
    calculator();
    return 0;
}