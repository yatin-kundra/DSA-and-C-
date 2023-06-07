// nahi chal raha

#include <iostream>
using namespace std;

void del(node* &head, int key);

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

// void deletionOfRepetedElement(node* &head, node* &tail, int key)
// {
//     node* temp = head;
//     node* prev = NULL;
//     int c = 0;
//     while(temp != NULL)
//     {
//         // cout<<1;
//         if(temp->data == key)
//         {
//             if(temp == head)
//             { 
//                 cout<<c;
//                 // cout<<"first";
//                 head = head->next;
//                 temp->next = prev;
//                 temp = head;
//             }

//             else if(temp = tail)
//             {
//                 // cout<<c;
//                 // cout<<"last";
//                 tail = prev;
//                 tail->next = NULL;
//                 temp = NULL;
//             }

//             else
//             {
//                 // cout<<c;
//                 // cout<<"inbetween";
//                 prev->next = temp->next;
//                 temp->next =  NULL;
//                 temp = prev->next;
//                 // delete temp;
//             }     
            
//         }
        
//         else
//         {
//             prev = temp;
//             temp = temp->next;
//         }
//         // c++;
            
//     }
// }


// void deletion(node* &head, node* &tail, int key)
// {
//     node* temp = head;
//     node* prev = NULL;
//     cout<<temp->data<<endl;

//     while(temp != NULL)
//     {
//     cout<<temp->data<<"*"<<endl;
//         node* nodetodelete = temp;
//         // cout<<1<<" "<<endl;
//         if(temp->data == key)
//         {
//             if(temp == head)
//         {
//             head = head->next;
//             temp = NULL;
//             temp = head;
//         }

//         else if(temp == NULL)
//         {
//             prev->next = NULL;
//             temp = prev; 
//             // return;

//         }
//             else
//         {
//             // cout<<14<<"df"<<endl;
//             // delete temp;
//             prev->next = temp->next;
//             temp->next = NULL;
//             temp = prev->next;
//         }
//         }

//         prev = temp;
//         temp = temp->next;
//     }
        
        
// }



/////////////// nischey

// void del(node* head,int key){
//     node* temp = head;
//     node* prev = NULL;
//     if (temp!=NULL && temp->data==key){
//         head = temp->next;
//         delete temp;
//         return; 
//     }

//     else {
//         while (temp!=NULL && temp->data!=key){
//             prev=temp;
//             temp=temp->next;
//         }
//         if (temp==NULL){
//             return;
//         }
//         prev->next=temp->next;

//         delete temp;
//     }
    
// }






//******** geeks for geeks***********

// void del(node** head, int key)
// {
 
//     // Store head node
//     node* temp = *head;
//     node* prev = NULL;
 
//     // If head node itself holds
//     // the key to be deleted
//     if (temp != NULL && temp->data == key) {
       
//       // Changed head
//         *head = temp->next;
       
//       // free old head
//         delete temp;
//         return;
//     }
 
//     // Else Search for the key to be
//     // deleted, keep track of the
//     // previous node as we need to
//     // change 'prev->next'
//     else {
//         while (temp != NULL && temp->data != key) {
//             prev = temp;
//             temp = temp->next;
//         }
 
//         // If key was not present in linked list
//         if (temp == NULL)
//             return;
 
//         // Unlink the node from linked list
//         prev->next = temp->next;
 
//         // Free memory
//         delete temp;
//     }
// }
 
// This function prints contents of
// linked list starting from the
// given node
// void printList(Node* node)
// {
//     while (node != NULL) {
//         cout << node->data << " ";
//         node = node->next;
//     }
// }










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
    del(head, key);

    display(head);

}


// void del(node* &head, int key)
// {
//     node* temp = head;
//     node* prev = head;

//     if(temp == head && temp->data == key)
//     {
//         head = temp->next;
//         delete temp;
//     }

//     else
//     {
//         while(temp->data ==)
//     }
// }

void del(node* &head, int key)
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
        }

        else
        {
            prev = temp;
            temp = temp->next;
        }
    }
}