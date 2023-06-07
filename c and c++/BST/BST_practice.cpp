#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node* BinarySearchTree(node* root, int data)
{
    
}

void inputInTree(node* root)
{
    int data;
    cout<<"enter the data: ";
    cin>>data;
    while(data != -1)
    {
        // now we have to use this data to creat BST   
        root = BinarySearchTree(root, data);
        cin>>data;
    }
}

int main()
{
    node* root = NULL;

    inputInTree(root);
}