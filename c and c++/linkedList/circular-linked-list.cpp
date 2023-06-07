#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    // constructur
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void atStarting(node* &tail, int data)
{
    node* temp = new node(data);
    if(tail == NULL)
    {
        tail = temp;
        temp->next = temp;
    }

    else
    {
        temp->next = tail;
        tail->next = temp;
    }
}

void AtEnd(node* &tail, int data)
{
    node* temp = new node(data);
    if(tail = NULL)
    {
        tail = temp;
        temp->next = temp;
    }

    else
    {
        temp->next = tail->next;
        tail->next = temp;
        tail = temp;

    }
}

// to display the link list
void display( node* &tail)
{
    node* temp = tail;

    do
    {
        cout<<tail->data << " ";
        tail = tail->next;
    }while (tail != temp);
    
    cout<<endl;
}

int main()
{
    // node* head = NULL;
    node* tail = NULL;

    atStarting(tail,1);
    atStarting(tail,2);
    atStarting(tail,3);
    atStarting(tail,4);
    atStarting(tail,5);
    atStarting(tail,6);

    display(tail);

    AtEnd(tail, 10);
    AtEnd(tail, 20);
    AtEnd(tail, 30);
    AtEnd(tail, 40);

    display(tail);


}