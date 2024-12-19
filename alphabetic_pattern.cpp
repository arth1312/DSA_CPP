#include<iostream>
using namespace std;
int main()
{
   int i;
   for(i = 1; i <= 6; i++)
   {
    if(i == 1 || i == 3)
    {
        cout << "* * * * * *";
    }
    else
    {
        cout << "*         *";
    }
    cout << endl;
   }
    return 0;
}