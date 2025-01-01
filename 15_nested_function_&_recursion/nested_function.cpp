#include<iostream>
using namespace std;

void ram()
{
    cout << "Jay Shree Ram";
}

void krishna()
{
    cout << "Jay Shree Krishna" << endl;
    ram();
}

int main()
{
    krishna();
    return 0 ;
}