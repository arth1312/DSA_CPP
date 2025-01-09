#include<iostream>
using namespace std;
int main()
{
   int a[5] = {55, 33, 14, 85, 99};
   int *p[5];
   int i;
   for(i = 0; i <= 4; i++)
   {
    *p[i] = &a[i];
   }

   for(i = 0; i <= 4; i++)
   {
    cout << "Address is " << p[i];
   } 
    return 0;
} 