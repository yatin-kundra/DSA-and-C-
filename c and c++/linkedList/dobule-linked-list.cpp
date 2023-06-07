#include <iostream>
using namespace std;

class node{
    public:

    int data;
    node* prev;  
    node* next;

    // constructor
    node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }

    // distructor
    ~node()
    {
        if(next != NULL)
        {
            next = NULL;
            delete next;
        }
    }
};

int len(node* &head)
{
    int len = 0;
    node* temp = head;
    while (temp->next == NULL)
    {
        temp = temp->next;
        len++;
    }
    
}

void atStarting(node* &head, int d)
{
    node* temp = new node(d);
    if(head == NULL )
    {
        head = temp;
    }

    else
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }

}

void atEnd(node* &head, node* &tail, int d)
{
    node* temp = new node(d);
    if(tail == NULL)
    {
        head = temp;
        tail = temp;
    }

    else
    {
        tail->next = temp;
        temp->prev = tail;
        tail = tail->next;
    }
}

void insertionAtPosition(node* &head, node* &tail, int pos,int d)
{
    node* temp = head;

    if(pos == 1)
    {
        atStarting(head,d);
        return;
    }
    int count = 1;
    while(count < pos-1)
    {
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL)
    {
        atEnd(head, tail, d);
        return;
    }
        node* new_node = new node(d);
        new_node->next = temp->next;
        temp->next->prev = new_node;
        temp->next = new_node;
        new_node->prev = temp;
    
} 

void deletion(node* &head, int pos)
{
   
    
    if(pos == 1)
    {
        node* temp = head;
        head = head->next;
        temp->next = NULL;
        head->prev = NULL;
        delete temp;
    }

    

    else
    {
        node* current = head;  // node to be deleted
        node* prev = NULL;  //  node pointing on previous node that is to be deleted

        int count = 1;
        while(count < pos -1)
        {
            prev = current;
            current = current->next;
            count++;
        }

        prev->next = current->next;
        prev->next->prev = current->prev;
        current->next = NULL;
        current->prev = NULL;
    }
}

void display(node * &head)
{
    node* temp = head;
    while (temp!= NULL)
    {
        cout<<temp->data << " ";
        temp = temp->next;
    }
    
    cout<<endl;
}

int main()
{
    node* head = NULL;
    node* tail = NULL;
    atStarting(head,1);
    atStarting(head,2);
    atStarting(head,3);
    
    display(head);

    atEnd(head,tail,9);
    atEnd(head,tail,8);
    atEnd(head,tail,7);
    atEnd(head,tail,6);

    display(head);

    insertionAtPosition(head, tail, 5, 500);
    display(head);

    deletion(head,5);   // nahi chal raha 
    display(head);

 
}