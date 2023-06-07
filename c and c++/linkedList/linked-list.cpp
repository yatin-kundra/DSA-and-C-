#include <iostream>
using namespace std;

struct node
{
    int value;
    node* next;
};

void dis(node* Node)
{
    while (Node != NULL)
    {
        cout<<"the value is : " << endl;
        Node = Node->next;
    }
    
}

int main()
{
    int n=0;
    int val=0;
    cout<<"enter the number of nodes you wish to creat: "<< endl;
    node* nnode;
    for(int i=0;i<n;i++)
    {
        cout<<"enter the value: "<< endl;
        cin>>val;
        nnode = new node;
        nnode->value = val;
        nnode->next = nnode;
        nnode->next = NULL;
    }

    dis(nnode);
}