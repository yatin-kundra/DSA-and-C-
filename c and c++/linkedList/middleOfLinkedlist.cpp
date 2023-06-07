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

void linkedList(node* &head, node* &tail, int data)
{
    node* temp = new node(data);
    if(head == NULL)
    {
        head = temp;
        tail = temp;
    }

    else
    {
        tail->next = temp;
        tail = tail->next;
    }

}

void display(node* &head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int middle(node* &head)
{
    node* temp = head;
    int middle = 1;
    while (temp != NULL)
    {
        middle++;
        temp = temp->next;
    }

    if(middle%2 == 0)
    {
        return (middle/2) + 1;
    }

    else
    {
        return middle/2;
    }
    
}

void num(int middle, node* &head)
{
    node* temp = head;
    int a = middle;
    while(a > 0)
    {
        temp = temp->next;
        a--;  
    }

    cout<<"middle element is: "<< temp->data<<endl;

}

int main()
{
    node* head = NULL;
    node* tail = NULL;
    linkedList(head, tail,1);
    linkedList(head, tail,1);
    linkedList(head, tail,1);
    linkedList(head, tail,7);
    linkedList(head, tail,8);
    linkedList(head, tail,9);
    linkedList(head, tail,1);
    linkedList(head, tail,1);

    display(head);

    cout<<"middle index: "<< middle(head)<<endl;
    int b = middle(head);

    num(b, head );
}