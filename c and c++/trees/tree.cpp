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

node* tree(node* root)
{
    cout<<"enter data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    if(data == -1)
        return NULL;

    cout<<"enter data in left node "<< data <<endl;
    root->left = tree(root->left);

    cout<<"enter data in right of " << data <<endl;
    root->right = tree(root->right);

    return root;
}

void levelOrderTraversal(node* root)
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


void levelOrderCreationTree(node* &root)
{
    // this queue stores pointers to the node , that's why its of type node* , means make node and each node has a name 
    // that is that nodes pointer and then we store that pointer in the queue
    queue<node*> q;
    
    int data;
    cout<<"enter the value in the root node: "<<endl;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();

        int templeft;
        cout<<"enter the data left of "<<temp->data<<endl;
        cin>>templeft;

        if(templeft != -1)
        {
            temp->left = new node(templeft);
            q.push(temp->left);
        }

        int tempright;
        cout<<"enter the data right of"<<temp->data<<endl;
        cin>>tempright;

        if(tempright != -1)
        {
            temp->right = new node(tempright);
            q.push(temp->right);
        }
    }
}


void inorder(node* root)
{
    if(root == NULL)
    {
        return ;
    }

    //LNR       --> lana rhod.  , trick to remember
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

// chal gaya -->> pass count by reference
int noOfLeafNode(node* root , int &count)
{
    if(root == NULL)
    {
        return 0;
    }

    noOfLeafNode(root->left, count);

    if(root->left == NULL && root->right == NULL)
    {
        count++;
         
    }

    noOfLeafNode(root->right, count);
    
    return count;
    
}

void preorder(node* root)
{
    if(root == NULL)
    {
        return ;
    }

    //NLR
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    
}

void postorder(node* root)
{
    if(root == NULL)
    {
        return ;
    }

    //LRN
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    
}

int height(node* root)
{
    // max distance b/w leaf node and root node
    if(root == NULL)
    {
        return 0;
    }

    int left = height(root->left);
    int right = height(root->right);

    return max(left, right) + 1;
}

int diameter(node* root)
{
    // longest path b/w 2 end nodes , end nodes can be both leaf and root
    if(root == NULL)
        return 0;

    int op1 = diameter(root->left);
    int op2 = diameter(root->right);
    int op3 = height(root->left) + 1 + height(root->right);
    
    return max(op1, max(op2, op3));
}

int main()
{
    node* root = NULL;

        root = tree(root);
    levelOrderTraversal(root);

    cout<<endl;
    inorder(root);
    cout<<endl;
    

   int count =0;
//    levelOrderCreationTree(root);
   levelOrderTraversal(root);
   cout<<"no of leaf node: "<<noOfLeafNode(root,count)<<endl;
   cout<<"height: " << height(root)<<endl;
   cout<<"diameter: " << diameter(root)<<endl;



}

// input : 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 (tree) 
// input :  1 3 5 2 4 9 -1 -1 -1 -1 -1 -1 -1    (levelordercreation)
/*
4 
2 5
1 3
*/  