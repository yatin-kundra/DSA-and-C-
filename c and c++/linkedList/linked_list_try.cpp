// simple linked list   -- >  hard coded 


#include <iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

int main()
{
    // cout<<"hello";
    node* head;
    head = NULL;
    node* nnode = new node;
    head = nnode;
    nnode->data = 5;
    node* nnode2 = new node;
    nnode->next = nnode2;
    nnode2->data = 10;
    nnode2->next = NULL;
    cout << "the value of 1st node is "<< nnode->data << endl;
    cout << "the value of 2nd node is "<< nnode2->data << endl;
}