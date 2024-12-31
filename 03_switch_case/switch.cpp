#include<iostream>
using namespace std;
int main()
{
    int choise, type;
    cout << "Enter 1 your choise Burger" << endl;
    cout << "Enter 2 your choise Pizza" << endl;
    cout << "Enter 3 your choise Sandwitch" << endl;
    cout << "Enter your choise: ";
    cin >> choise;
    switch (choise)
    {
        case 1:
            cout << "Your order Burger";
            break;
        case 2:
            cout << "Your order Pizza";
            break;
        case 3:
            cout << "Enter 1 your veg Sandwitch" << endl;
            cout << "Enter 2 your grill Sandwitch" << endl;
            cout << "Enter your type: ";
            cin >> type;
            switch (type)
            {
            case 1:
                cout << "Your order veg Sandwitch";
                break;
            case 2:
                cout << "Your order grill Sandwitch";
                break;
            default:
                cout << "Invalid type";
                break;
            }
            break;
    
        default:
            cout << "Invalid choise";
            break;
    }
    return 0;
}