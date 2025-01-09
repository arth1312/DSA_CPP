#include<iostream>
using namespace std;
int main()
{
   int a = 5;
   int *p;
   int **p1;
   *p = &a;
   **p1 = &p;
   cout << a;
   cout << *p;
   cout << **p1;
    return 0;
} 