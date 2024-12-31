#include<iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int a[size];
    cout << "Enter array element: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a[" << i << "]: ";
        cin >> a[i];
    }
    cout << endl << endl << "==================================" << endl << endl;

    int choice;
    int pos, elem;

    do
    {
        cout << "press 1 Insert element" << endl;
        cout << "press 2 Update element" << endl;
        cout << "press 3 Delete element" << endl;
        cout << "press 4 View all element" << endl;
        cout << "press 0 exit element" << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter position: ";
            cin >> pos;

            cout << "Enter Element: ";
            cin >> elem;

            for(int i = size - 1; i >= pos; i--)
            {
                a[i+1]=a[i];
            }
            size++;
            a[pos] = elem;
            cout << "Element Insert Successfull..." << endl;
            cout << endl;

            break;

        case 2:
            cout << "Enter position: ";
            cin >> pos;

            cout << "Enter Element: ";
            cin >> elem;

            a[pos] = elem;
            cout << "Element Update Successfull..." << endl;
            cout << endl;
            
            break;

        case 3:
            cout << "Enter position: ";
            cin >> pos;

            for (int i = pos + 1; i < size; i++)
            {
                a[i-1]=a[i];
            }
            size--;
            cout << "Element Delete Successfull..." << endl;
            cout << endl;

            break;

        case 4:
            cout << "array value: ";
            for(int i = 0; i < size; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl << endl;

            break;

        case 0:
            break;
        
        default:
        cout << "Your envalid choice" << endl;
            break;
        }
    } while (choice != 0);
    
    
    return 0;
}