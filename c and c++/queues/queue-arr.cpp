#include <iostream>
using namespace std;

class queue
{
    public:
    int* arr;
    int size;
    int fornt;
    int rear;

    queue(int s)
    {
        this->size = s;
        this->arr = new int[size];
        this->fornt = 0;
        this->rear = 0;
    }

    
void  push(int data)
{
    if( rear == size)
    {
        // cout<<rear<<endl;
        cout<<"queue is full"<<endl;
    }

    else
    {
        arr[rear] = data;
        rear++;
        
    }
}

void pop()
{
    if(fornt == rear)
    {
        
        cout<<"queue is empty!!"<<endl;
    }

    else
    {
        fornt++;
        if(fornt == rear)
        {
            fornt = 0;
            rear = 0;
        }
    }
}

void front()
{
    if(rear == fornt)
    {
        cout<<"queue is empty!!"<<endl;
    }

    else
    {
        cout<<"front : "<<arr[fornt]<<endl;
    }
}

void display(int* arr)
{
    for(int j = fornt;j<rear;j++)
    {
        cout<<arr[j]<<endl;
    }
}

};


int main()
{
    queue q(6);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(30);
    q.push(30);
    q.push(30);
    q.front();
    q.push(40);
    q.pop();
    q.front();
    q.display(q.arr);


}