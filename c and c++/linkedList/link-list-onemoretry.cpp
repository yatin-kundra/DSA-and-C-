#include <iostream>
using namespace std;

struct  node
{
    int data;
    node* next;
};

void display(node* n);

void making(node* &head, int val)
{
    node* nnode = new node;
    if(head == NULL)
    {
        head = nnode;
    }

    node* temp = head;
    while (temp->next != NULL)

    {
        temp = temp->next;

    }

    temp->data = val;
    temp->next = nnode;
    
}

int main()
{
    int n;
    cout<<"enter the number of nodes you want to creat : "<<endl;
    cin>>n;

    node* head;
    do
    {
        making(head,n);
        n--;
    } while (n<0);
    
    
}

void display(node* n)
{
    while(n!=NULL)
    {
        cout<< "value: " << n->data<< endl;
        n = n->next;

    }
}