#include<iostream>
using namespace std;
int main()
{
   int n, sum, lastDigit;
   sum = 0;
   cout << "Enter number: ";
   cin >> n;
   while(n > 0)
   {
    lastDigit = n % 10;
    sum = sum + lastDigit;
    n = n / 10;
   }
   cout << "sum of digits: " << sum << endl;
    return 0;
}