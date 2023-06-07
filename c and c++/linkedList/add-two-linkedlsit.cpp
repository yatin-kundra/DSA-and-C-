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

void creation(node* &head, node* &tail, int data)
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
        tail = temp;
    }
}

void display(node* &head)
{
    node * temp = head;

    while(temp != NULL)
    {
        cout<<temp->data << endl;
        temp = temp->next;
    }
}

void addition(node* &head1, node* &head2)
{
    node* temp1 = head1;
    node* temp2 = head2;

    while(temp1 != NULL || temp2 != NULL)
    {
        cout<<temp1->data + temp2->data <<endl;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
}

int main()
{
    node* head1 = NULL;
    node* head2 = NULL;
    node* tail1 = NULL;
    node* tail2 = NULL;

    creation(head1, tail1, 1);
    creation(head1, tail1, 1);
    creation(head1, tail1, 1);
    creation(head1, tail1, 1);
    creation(head1, tail1, 1);
    creation(head1, tail1, 1);

    display(head1);

    cout<<endl;

    creation(head2, tail2, 1);
    creation(head2, tail2, 2);
    creation(head2, tail2, 3);
    creation(head2, tail2, 4);
    creation(head2, tail2, 5);
    creation(head2, tail2, 6);

    display(head2);

    cout<<endl;

    addition(head1, head2);



}