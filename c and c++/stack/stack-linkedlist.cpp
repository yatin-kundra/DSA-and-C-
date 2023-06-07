#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void making_of_stack(node* &top,int data)
{
    node* temp = new node(data);
    if(top == NULL)
    {
        top = temp;
    }

    else
    {
        temp->next = top;
        top = temp;
    }
}

void display(node* &top)
{
    node* temp = top;
    int i = 0;
    while(temp != NULL)
    {
        
        // cout<<i<<endl;  // was checking error  , temp ki jagha pe temp->next likha hua tha 
        cout<<temp->data<<endl;
        temp = temp->next;
        i++;
    }
    
}

void pop(node* &top)
{
    if(top == NULL)
    {
        cout<<"stack is empty !!"<<endl;
    }
    
    else
    {
        node* temp = top->next;
        top->next = NULL;
        top = temp;
    }
    
}

bool isEmpty(node* &top)
{
    if(top == NULL)
    {
        return true;
    }

    else
    {
        return false;
    }
}

void Empty(bool emp)
{
    if(emp)
    {
        cout<<"stack is empty!!"<<endl;
    }

    else
    {
        cout<<"stack is not empty!!"<<endl;
    }
}

int main()
{
    node* top = NULL;

    making_of_stack(top,10);
    making_of_stack(top,20);
    making_of_stack(top,30);
    making_of_stack(top,40);
    display(top);
    pop(top);
    display(top);
    Empty(isEmpty(top));
}