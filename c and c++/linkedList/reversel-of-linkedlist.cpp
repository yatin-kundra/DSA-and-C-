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

void reverse(node* &head, node* &tail)
{
    node* forward = NULL;   // forward tell which node is next 
    node* current = head;   // current changes the link i.e. reverse the current node   
    node* previous = NULL;  // pevious helps current to revrse the node as it points to the previous node

    if(head == NULL)
    {
        return;
    }

    else if (head->next == NULL)
    {
        return;
    }

    while(current != NULL)
    {
        forward = current->next;
        current->next = previous;
        previous = current;
        current = forward;
    }

    tail = head;
    head = previous;
}

int main()
{
    node* head = NULL;
    node* tail = NULL;
    linkedList(head,tail,1);
    linkedList(head,tail,2);
    linkedList(head,tail,3);
    linkedList(head,tail,4);
    linkedList(head,tail,5);

    display(head);

    reverse(head,tail);

    display(head);

}