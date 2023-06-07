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

int iterate(node* &head, int key)
{
    node* temp = head;
    int count = 0;
    while(temp != NULL)
    {
        if(temp->data == key)
        {
            count++;
        }

        temp = temp->next;
    }

    return count;
}




void deletion(node* &head, int key)
{
    node* prev = NULL;
    node* temp = head;

    while(temp != NULL)
    {
        if(head->data == key)
        {
            head = head->next;
            delete temp;
            temp = head;
        }

        else if(temp->data == key)
        {
            prev->next = temp->next;
            delete temp;
            temp = prev->next;
        }

        else
        {
            prev = temp;
            temp = temp->next;
        }
        
    }
}





int main()
{
    node* head = NULL;
    node*  tail = NULL;
    int key = 1;

    linkedList(head, tail, 1);
    linkedList(head, tail, 2);
    linkedList(head, tail, 1);
    linkedList(head, tail, 2);
    linkedList(head, tail, 1);
    linkedList(head, tail, 3);
    linkedList(head, tail, 1);

    display(head);

    cout<< iterate(head, key)<<endl;

    // deletionOfRepetedElement(head, tail, key);
    deletion(head, key);

    display(head);

}
