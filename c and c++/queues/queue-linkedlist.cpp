#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }


};



void push(node* &front, node* &rear,int data)
{
    node* temp = new node(data);
    if(rear ==front)
    {
        front = temp;
        rear = temp;
    }

    else
    {
        rear->next = temp;
        rear = temp;
    }
}

void pop(node* &front, node* &rear)
{

    if(front ==  rear)
    {
        cout<<"queue is empty!!"<<endl;
    }

    else
    {
        node* temp = front;
        while(temp->next->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        rear = temp;
    }
}

void display(node* &front)
{
    node* temp = front;
    while(temp != NULL)
    {
        cout<<"value: "<<temp->data<<endl;
        temp = temp->next;
    }
}

int main()
{
    node* front = NULL;
    node* rear = NULL;

    push(front,rear,1);
    display(front);
    push(front,rear,2);
    display(front);
    // push(front,rear,2);
    // push(front,rear,3);
    // push(front,rear,4);
    // push(front,rear,5);
    // display(front);
    // pop(front,rear);
    // display(front);
}