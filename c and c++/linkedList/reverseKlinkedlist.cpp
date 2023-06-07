// reversal of k linked list done


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

node* Kreverse(node* &head, int k)
{
    // base case : if empty
    if(head == NULL)
    {
        return NULL;
    }


    // case 2 : do it one time rest will be handeled by recurtion

    node* curr = head;
    node* prev = NULL;
    node*  next = NULL;
    int count = 0;

    while(curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // case3 : recurtion

    if(next != NULL)
    {
        head->next = Kreverse(next, k);
    }

    return prev;
}

int main()
{
    node* head = NULL;
    node* tail = NULL;
     linkedList(head, tail, 1);
     linkedList(head, tail, 2);
     linkedList(head, tail, 3);
     linkedList(head, tail, 4);
     linkedList(head, tail, 5);
     linkedList(head, tail, 6);
     linkedList(head, tail, 151);
     linkedList(head, tail, 888);

     display(head);
      
     head = Kreverse(head,3);

     

     display(head);
}