#include <iostream>
using namespace std;

class list{
    public:

    
        class node{
            public:
            int data;
            node* next;

            node()
            {
                this->data = 0;
                this->next = NULL;
            }
        };

    // node* head;
    // node* tail;
    // list(node* &head , node* &tail)
    // {
    //     this->head = NULL;
    //     this->tail = NULL;
    // }
};

    void creation(list::node* &head, list::node* &tail,int data)
{
    list::node*  temp  = new list::node;
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

void display(list::node* head)
{
    list::node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
}

int main()
{
    list::node* head = NULL;
    list::node* tail = NULL;
    list::node l1;
    creation(head,tail,1);
    creation(head,tail,2);
    creation(head,tail,3);
    creation(head,tail,4);
    creation(head,tail,5);
    display(head);
    creation(head,tail,10);
    creation(head,tail,20);
    creation(head,tail,30);
    creation(head,tail,40);
    display(head);

}