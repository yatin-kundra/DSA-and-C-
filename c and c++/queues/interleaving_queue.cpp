// question  3 of assignment

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

void Queue(node* &front, node* &rear, int data)
{
    node* temp = new node(data);
    if(front == NULL)
    {
        front = temp;
        rear = temp;
    }

    rear->next = temp;
    rear = rear->next;
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

void interleaveDisplay(node* &front)
{
    node* temp = front;
    node* ptr = front;
    // front = front->next;
    while(front->next->next != NULL)
    {
        temp = temp->next;
        front = front->next->next;
    }
    temp = temp->next;  // at 6

    while(temp != NULL)
    {
        cout<<ptr->data<<" ";
        cout<<temp->data<<" ";
        ptr = ptr->next;
        temp = temp->next;
    }
    cout<<endl;
    
}

// new queue

// void newqueue(node* &front, node* &newFrotn, node* &newRear)
// {
//     node* temp = front;
//     node* ptr = front;
//     // front = front->next;
//     while(front->next->next != NULL)
//     {
//         temp = temp->next;
//         front = front->next->next;
//     }
//     temp = temp->next;  // at 6

//     while(temp != NULL)
//     {
//         // cout<<ptr->data<<" ";
//         // cout<<temp->data<<" ";

//         node* que = new node(temp->data);
        
//         node* que2 = new node(ptr->data);



//         ptr = ptr->next;
//         temp = temp->next;
//     }
//     cout<<endl;
// }

int main()
{
    node* front = NULL;
    node* rear = NULL;

    node* newFront = NULL;
    node* newRear = NULL;

    Queue(front, rear, 1);
    Queue(front, rear, 2);
    Queue(front, rear, 3);
    Queue(front, rear, 4);
    Queue(front, rear, 5);
    Queue(front, rear, 6);
    Queue(front, rear, 7);
    Queue(front, rear, 8);
    Queue(front, rear, 9);
    Queue(front, rear, 10);

    display(front);
    interleaveDisplay(front);

}