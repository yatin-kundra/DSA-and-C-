#include <iostream>
using namespace std;

struct  node
{
    int data;
    node* next;
};

void display(node* n);

int main()
{
    int n;
    cout<<"enter the number of nodes you want to creat : "<<endl;
    cin>>n;
    node* head;
    node* nnode = new node;
    head = nnode;

    cout<<"enter the value : " << nnode->data<<endl;
    head->next;
    for(int i=0;i<n-1;i++)
    {
        node* temp;
        node* nnode = new node;
        cout<<"enter the value : " << nnode->data<<endl;
        cin>> nnode->data;
        temp->next = nnode;
        temp = temp->next;
        i++;


        
    }

}

void display(node* n)
{
    while(n!=NULL)
    {
        cout<< "value: " << n->data<< endl;
        n = n->next;

    }
}