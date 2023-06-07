#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;
};

void display(node* n);

int main()
{
    node* head;
    head = NULL;
    int count;
    cout<<"enter the number of nodes you wish to creat : " << endl;
    cin>>count;


    
    display()
   
    
}

void display(node* n)
{

     for(int j=0; j<count;count++)
    {   
        count<<"value: " << n->data<<endl;
    }
}


node list(int count){
        for (int i = 0; i < count; i++)
    {
        node* nnode = new node;
        cout<<"enter the value in the node : "<<endl;
        cin>>nnode->data;
        nnode->next = nnode;
        nnode = nnode->next;
        count++;
    }
}