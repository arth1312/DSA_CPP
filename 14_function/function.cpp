#include<iostream>
using namespace std;


// Take Nothing Return Nothing 
void arth()
{
    cout << "My name is arth" << endl;
}


// Take Something Return Nothing
void hello(string word)
{
    cout << word << endl;
}

// Take Nothing Return Something
int add()
{
    return 5;
}

// Take Something Return Something
int addition(int a)
{
    return a;
}

int main()
{
    arth();
    hello("hello  my dear friend ");
    cout << add() << endl;
    cout << addition(12345);
    return 0;
}