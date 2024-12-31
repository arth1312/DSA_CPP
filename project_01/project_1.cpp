#include <iostream>
using namespace std;

int main() {
    //  Stap - 1 
    int marks;
    cout << "Enter your marks out of 100: ";
    cin >> marks;

    
    char grade = (marks >= 90) ? 'A' : 
    (marks >= 80) ? 'B' : 
    (marks >= 70) ? 'C' : 
    (marks >= 60) ? 'D' :
    (marks >= 50) ? 'E' : 'F';

    cout << "grade is: " << grade << endl;

    //  Stap - 2

    switch(grade) {
        case 'A':
            cout << "Excellent work!" << endl;
            break;
        case 'B':
            cout << "Well done!" << endl;
            break;
        case 'C':
            cout << "Good job!" << endl;
            break;
        case 'D':
            cout << "You passed" << endl;
            break;
        case 'F':
            cout << "Sorry, you failed." << endl;
            break;
        default:
            cout << "Invalid grade." << endl;
            break;
    }


// Stap - 3

       cout << "Your grade is: " << grade << endl;
    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D') {
        cout << "Congratulations! You are eligible for the next level." << endl;
    } else if (grade == 'F') {
        cout << "Please try again next time." << endl;
    }

    return 0;
}