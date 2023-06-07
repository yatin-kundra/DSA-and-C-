#include <iostream>
using namespace std;

class queue
{
    public:
    int*  arr;
    int front;
    int rear;
    int size;

    queue(int size)
    {
        this->size = size;
        this->arr = new int[size];
        this->rear = 0;
        this->front = 0;
    }

    void push(int num)
    {
        if(rear - front < 7)
        {
            cout<<"queqe is full"<<endl;
        }

        else
        {
            arr[rear] = num;
            rear++
            if()
        }

    }
};