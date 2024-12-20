#include<iostream>
using namespace std;
int main()
{
    // Q.1 Develop a program that prints all alphabets from 'a' to 'z' by skipper 3 alphabets using a do-while loop.
    cout << "Q.1 Alphabet Skipper..." << endl;
    char letter = 'a';
    do
    {
        cout << letter << " ";
        letter += 4;
    }while(letter <= 'z');
    cout << endl;


    // Q.2 Develop a program to count the total number of digits in a number.
    cout << "Q.2 Digits Counter..." << endl;
    int n, count = 0;
    cout << "Enter any number: ";
    cin >> n;
    while (n > 0)
    {
        count++;
        n /= 10;
    }
    cout << "Total number of digits: " << count << endl;


    // Q.3 Develop a program to find the sum of a numbers's frist and last digits.
    cout << "Q.3 Digits Addition..." << endl;
    int number, sum, firstdigit, lastdigit;
    cout << "Enter number: ";
    cin >> number;
    lastdigit = number % 10;
    while(number >= 10)
   {
    n = n / 10;
   }
    firstdigit = n;
   sum = firstdigit + lastdigit;
    cout << "The sum of the firstdigit and the lastdigit: " << sum << endl;
    
    return 0;
}