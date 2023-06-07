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

node* tree(node* root)
{
    cout<<"Enter data : ";
    int data;
    cin>>data;
    root = new node(data);
    if(data  == -1)
        return NULL;

    // for left leaf
    cout<<"Enter data in left of "<<data<<": ";
    root->left = tree(root->left);

    // for right leaf
    cout<<"Enter data in right of "<<data<<": ";
    root->right = tree(root->right);

    return root;
}

void inorder(node* root)
{
    if(root == NULL)
    {
        return ;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

int main()
{
    // tree
    node* root = NULL;
    root = tree(root);
    cout<<endl;
    inorder(root);


}