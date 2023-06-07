// linked list ban gai . hehehehehehe :D 


#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

void insertAtPosition(node* &head, node* &tail, int pos, int data);
void deletion(int pos, node* &head);
void atStaring(node* &head, int data);
void atEnd(node* &head, node* &tail, int data);
void display(node * &head);



int main()
{
    node* head = NULL;
    node* tail = NULL;

    atStaring(head,1);
    atStaring(head,2);
    atStaring(head,3);
    atStaring(head,4);
    atStaring(head,5);

    display(head);

    atEnd(head,tail,1);
    atEnd(head,tail,2);
    atEnd(head,tail,3);
    atEnd(head,tail,4);
    atEnd(head,tail,5);

    display(head);

    insertAtPosition(head,tail,6,79898);

    display(head);

    deletion(6,head);

    display(head);
}

// creating by addign a node at the start
void atStaring(node* &head, int data)
{
    node* temp = new node;

    if(head == NULL)
    {
        temp->data = data;
        temp->next = NULL;
        head = temp;
    }

    else
    {
        temp->data = data;
        temp->next = NULL;
        temp->next = head;
        head = temp;
    }
    
}

// creating by adding node at the end
void atEnd(node* &head, node* &tail, int data)
{
    node* temp = new node;

    if(tail == NULL)
    {
        temp->data = data;
        temp->next = NULL;
        tail = temp;
        head = temp;
    }

    else
    {
        temp->data = data;
        temp->next = NULL;
        tail->next = temp;
        tail = tail->next;
    }
}

// inserting at a desired position 
void insertAtPosition(node* &head, node* &tail,int pos, int data)
{
    node* temp = head;

    if(pos == 1)
    {
        atStaring(head,data);
        return; // so that we can return and we donot execute the rest of the code;
    }

    int count = 1;
    while(count <pos - 1)
    {
        temp = temp->next;
        count++;
    }

    if(temp->next ==NULL)
    {
        atEnd(head,tail,data);
        return;
    }

    node * new_node = new node;
    new_node->data = data;
    new_node->next = temp->next;
    temp->next = new_node;

}

// to display the link list
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

// to delete an element in the link list 
void deletion(int pos, node* &head)
{
    if(pos == 1)
    {
        node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    else
    {
        node* current = head;
        node* previous = NULL;
        

        int count = 1;
        while(count < pos)
        {
            previous = current;
            current = current->next;
            count++;
        }

        previous->next = current->next;
        current->next = NULL;
        delete current;
    }
}



// NOTES
// tail->next is a block where value is stored , tail is just a pointer , like its just an arrow
