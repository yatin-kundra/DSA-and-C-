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


int main()
{
    node* head = NULL;
    node*  tail = NULL;

    linkedList(head, tail, 1);
    linkedList(head, tail, 2);
    linkedList(head, tail, 1);
    linkedList(head, tail, 2);
    linkedList(head, tail, 1);
    linkedList(head, tail, 3);
    linkedList(head, tail, 1);

    display(head);
}