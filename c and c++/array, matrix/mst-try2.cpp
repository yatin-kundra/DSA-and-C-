#include <iostream>
using namespace std;


    class node
{
    public:
    int data;
    node* next;

    node()
    {
        this->data = 0;
        this->next = NULL;
    }

    void creation(node* &head, node* &tail,int data)
{
    node*  temp  = new node;
    if(head == NULL)
    {
        tail = temp;
        head = temp;
        temp->data = data;
    }

    else
    {
        tail->next = temp;
        tail = tail->next;
        temp->data = data;
    }
}

void display(node* head)
{
    node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
}
};

void insertDuplicate(node* &ptr,  node* &temp1, node* &head1 )
{
    // node* &temp = head1;
    // while (temp->data != temp1->data)
    // {
    //     temp = temp->next;
    // }

    // ptr->next = temp->next;
    // temp->next = ptr;
    
}

void deleteT1(node* &temp1, node* &head1)
{
    node* &t1 = head1;

    if(temp1 == head1)
    {
        temp1 = NULL;
        head1 = head1->next;
        temp1 = head1;
        
    }
    while (t1->next->data == temp1->data)
    {
        t1 = t1->next;
    }
    
     t1->next = t1->next->next;
     t1->next->next = NULL;
}

void question(node* &head1,  node* &head2)
{
    node* temp1 = head1;
    node* ptr = NULL;
    while(temp1 != NULL)
    {
        // cout<<temp1->data<<" "<< endl;
        int yes = 0;
        int count = 1;
        node* temp2 = head2;
        while(temp2 != NULL)
        {
            // cout<<temp2->data<<" ";
            if(temp1->data == temp2->data)
            {
                
                yes = 1;
                ptr = temp2;
            }

            temp2 = temp2->next;
        }

        if(yes == 1)
        {
            insertDuplicate(ptr, temp1, head1);
        }

        else
        {
            deleteT1(temp1, head1);
        }

        count++;
        temp1 = temp1->next;
    }
}



int main()
{
    node* head1 = NULL;
    node* head2 = NULL;
    node* tail1 = NULL;
    node* tail2 = NULL;

    node l1;
    node l2;
    l1.creation(head1,tail1,1);
    l1.creation(head1,tail1,2);
    l1.creation(head1,tail1,3);
    l1.creation(head1,tail1,4);
    l1.display(head1);
    l2.creation(head2,tail2,22);
    l2.creation(head2,tail2,2);
    l2.creation(head2,tail2,4);
    l2.creation(head2,tail2,7);
    l2.creation(head2,tail2,75);
    l2.display(head2);

    question(head1,head2);
    l1.display(head1);
}