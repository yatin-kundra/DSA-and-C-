#include <iostream>
#include <queue>
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

// implementation of binary search tree     10 8 21 7 5 27 4 3 -1

node*  bst(node* root, int data)
{
    // base case as we need recursion to see which node is the last so that we can add a node there to inset the data
    if(root == NULL)
    {
        root = new node(data);
        return root;
    }

    // now if root->data > data then we go left
    if(root->data > data)
    root->left = bst(root->left, data);

    // now if root->data < data then we go rigt
    else
    root->right = bst(root->right, data);

    return root;

}

// a function to ask for input till input is not -1
void inputdata(node* &root)
{
    int data;
    cout<<"enter the data :";
    cin>>data;

    while(data != -1)
    {
        root = bst(root, data);
        cin>>data;
    }
}

// copied from tree.cpp
void levelOrderTraversal(node* &root)
{
    queue<node*> q;
    q.push(root);   // root node is pushed in queue [root]
    q.push(NULL);   // then NULL is pushed in queue [root, NULL]

    while(!q.empty())
    {
        node* temp = q.front();     // pointing to element at front
        q.pop();        // removing element at the front from the queue and printing

        if(temp == NULL)    // if null then then enter
        {
            cout<<endl;
                if(!q.empty())      // if queue is not empty then push NULL as to indicate there are elements present
                {                   // and we want to enter when level completes
                    q.push(NULL);
                }
        }

        else
        {
            cout<<temp->data<<" ";
            if(temp->left)
            q.push(temp->left);     // if there's something at left then append it in the queue

            if(temp->right)         // if there's something at right then append it in the queue
            q.push(temp->right);
        }
    }

}

void inorder(node* root)
{
    // base case
    if(root == NULL)
    {
        return ;
    }

    // LNR

    inorder(root->left);

    cout<<root->data<<" ";

    inorder(root->right);

}

void preorder(node* root)
{
    // base case
    if(root == NULL)
    {
        return ;
    }

    // NLR

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root)
{
    // base case
    if(root == NULL)
    {
        return ;
    }

    // LRN

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int minvalInBST(node* root)
{
    node* temp = root;
    while(temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp->data;
}

int maxInBST(node* root)
{
    node* temp = root;
    while(temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp->data;
}

node* deleteNodeBST(node* root, int data)
{
    // base case
    if(root == NULL)
    {
        return root;
    }

    // base case
    if(root->data == data)
    {
        // deletion process

        // case 1:
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            return root;
        }

        // case 2:
        // right child
        if(root->left == NULL && root->right != NULL)
        {
            // deletion
            node* temp = root->right;
            delete root;
            return temp;
        }

        // left child
        if(root->right == NULL && root->left != NULL)
        {
            // deletion
            node* temp = root->left;
            delete root;
            return temp;
        }

        // case 3;

        if(root->left != NULL && root->right != NULL)
        {
            // deletion by minimum element , so we will have to creat a fun. to find the min element
            int min = minvalInBST(root->right);
            root->data = min;
            root->right = deleteNodeBST(root->right, min);

        }
    }
    // left
    else if(root->data > data)
    {
        root->left = deleteNodeBST(root->left, data);
    }

    else
    {
        root->right = deleteNodeBST(root->right, data);
    }


    return root;

}

int main()
{
    node* root = NULL;
    inputdata(root);

    levelOrderTraversal(root);

    cout<<"inorder traversal"<<endl;

    cout<<"min value in bst is: "<<minvalInBST(root)<<endl;

    inorder(root);
    cout<<endl<<"deletion"<<endl;

    // deletion 
    deleteNodeBST(root, 8);

    levelOrderTraversal(root);

    cout<<"inorder traversal"<<endl;

    inorder(root);

    


}