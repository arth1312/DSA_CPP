#include<iostream>
using namespace std;

void calculator()
{
    int choice;
    do
    {
        cout << "Press 1 for +" << endl;
        cout << "Press 2 for -" << endl;
        cout << "Press 3 for *" << endl;
        cout << "Press 4 for /" << endl;
        cout << "Press 5 for %" << endl;
        cout << "Press 0 for the exit" << endl;

        cout << endl << "=======================================" << endl << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0) {
            break;
        }

        int first, second;
        cout << "Enter the first number: ";
        cin >> first;
        cout << "Enter the second number: ";
        cin >> second;

        switch(choice)
        {
            case 1:
                cout << "Addition of " << first << " and " << second << " is " << first + second << endl << endl;
                break;
            
            case 2:
                cout << "Subtraction of " << first << " and " << second << " is " << first - second << endl << endl;
                break;
            
            case 3:
                cout << "Multiplication of " << first << " and " << second << " is " << first * second << endl << endl;
                break;
            
            case 4:
                    cout << "Division of " << first << " and " << second << " is " << first / second << endl << endl;
                break;
            
            case 5:
                    cout << "Modulus of " << first << " and " << second << " is " << first % second << endl << endl;
                break;
            
            default:
                cout << "Enter a valid choice" << endl;
                break;
        }
    } while(choice != 0);
}

int main()
{
    calculator();
    return 0;
}
