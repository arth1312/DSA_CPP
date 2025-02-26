#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *left;
        Node *right;
};

int main()
{

    Node *root = NULL;
    root = new Node();
    root->left = root->left->left;
    root->data = 10;
    root->right = root->right->right;

    root->left = new Node();
    root->left->data = 20;
    root->left->left = NULL;
    root->left->right = NULL;

    root->right = new Node();
    root->right->data = 30;
    root->right->left = NULL;
    root->right->right = NULL;

    cout << "Root: " << root->data << endl;
    cout << "Left child of root: " << root->left->data << endl;
    cout << "Right child of root: " << root->right->data << endl;

    return 0;
}
