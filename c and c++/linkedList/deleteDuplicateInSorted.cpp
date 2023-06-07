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

void delDuplicate(node* &head)
{
    node* current = head;
    node* forward = head;

    while(current != NULL)
    {
        forward = current->next;
        if((forward != NULL) && current->data == forward->data)
        {
            current->next = forward->next;
            delete forward;
            forward = current->next;
        }

        else
        {
            current = current->next;
        }
    }
}

int main()
{
    node* head = NULL;
    node*  tail = NULL;

    linkedList(head, tail, 1);
    linkedList(head, tail, 1);
    linkedList(head, tail, 2);
    linkedList(head, tail, 2);
    linkedList(head, tail, 3);
    linkedList(head, tail, 4);
    linkedList(head, tail, 4);

    display(head);

    delDuplicate(head);

    display(head);
    



}