#include<iostream>
using namespace std;
int main()
{
   int n, sum, lastDigit, firstDigit;
   cout << "Enter number: ";
   cin >> n;
   lastDigit = n % 10;
   while(n >= 10)
   {
    n = n / 10;
   }
   firstDigit = n;
   sum = firstDigit + lastDigit;
   cout << "sum is: " << sum << endl;
    return 0;
}