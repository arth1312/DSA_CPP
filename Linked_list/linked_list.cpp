#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

int main()
{
    Node *HEAD = NULL;
    HEAD = new Node();

    HEAD->data = 13;
    HEAD->next = NULL;

    Node *n2 = new Node();
    n2->data = 12;
    n2->next = NULL;
    HEAD->next = n2;
    
    Node *n3 = new Node();
    n3->data = 2005;
    n3->next = NULL;
    n2->next = n2;

    cout << "HEAD: " << HEAD->data << ", Address: " << HEAD->next << endl;
    cout << "n2: " << n2->data << ", Address: " << n2->next << endl;
    cout << "n3: " << n3->data << ", Address: " << n3->next << endl;
    
    return 0;
}