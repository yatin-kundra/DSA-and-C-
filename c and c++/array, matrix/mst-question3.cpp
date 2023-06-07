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

void question(node l1,node* &head1, node l2, node* &head2)
{
    node* temp1 = head1;
    int isSame = 0;

    while (temp1 != NULL)       // while 1
    {
        node* temp2 = head2;
        while (temp2 != NULL)   // while 2
        {
            if(temp1->data == temp2->data && temp2 != NULL)
            {
              
                isSame = 1;
                temp1 = temp1->next;
                temp2 = head2;
            }


            else if (isSame == 0 && temp2->next == NULL)
        {
            // deletion of node of l1 
            temp1 = temp1->next;
            head1 = NULL;
            head1 = temp1;
            temp2 = head2;
        }
        else{
              
            temp2 = temp2->next;
        }
            
        }
        
        // temp1 = temp1->next;

        
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

    question(l1,head1,l2,head2);
    l1.display(head1);

}