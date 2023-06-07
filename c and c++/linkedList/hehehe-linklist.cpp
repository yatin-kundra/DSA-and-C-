#include <iostream>
using namespace std;

    class node{
        public:
        
        int data;
        node* next;

    };
    // insertion at the begining - done , hehehehe;)
    void insertAtBeging(node* &head, int data)
    {
        node* temp = new node;  // creating a node 
        temp->data = data;      // putting value in node 
        temp->next = NULL;      // storing null value in the next field of the temp (node)
        temp->next = head;      // the new node temp's next field cointain the address of head ie address of the previously existig node 
                                // at which head was pointing , so now this means our new node points to the previously existing node
        head = temp;            // head is a pointer and temp is also a pointer of same type, node. so address of temp is now
                                // stored in head , means head is now pointing to our new node temp.


    }

    void insertionAtEnd(node* &tail, int data)
    {
        node* temp = new node;
        temp->data = data;
        temp->next = NULL;
        tail->next = temp;
        tail = tail->next;

        
    }


void display(node* &head)
{// to print the linked list 
    node* temp = head;  // a pointer of type node is created who is same as null
    while(temp!= NULL)  // till this new pointer is not null we will print and move this pointer along the whole linke list
    {
        cout<<temp->data << " " ;   // printing data fo the linked list
        temp = temp->next;    // this line means the value stored in the next filed of them , i.e at staring head is stored in temp
                                // this will make temp jump onto the next node 

    }
}

int main()
{
    node* head = NULL;
    node* tail = NULL;


    node* nnode = new node;
    nnode->data = 1;
    nnode->next = NULL;
    head = nnode;

// insertion at the beging :)
    insertAtBeging(head,2);
    insertAtBeging(head,3);
    insertAtBeging(head,4);
    insertAtBeging(head,5);
    display(head);

    // insertion at the end :)

    // cout<<endl;

    insertionAtEnd(tail,10);
    insertionAtEnd(tail,20);
    insertionAtEnd(tail,30);
    insertionAtEnd(tail,40);
    display(head);
    

}