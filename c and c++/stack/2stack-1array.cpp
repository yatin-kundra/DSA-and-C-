#include <iostream>
using namespace std;

class stack
{
    public:
    int *arr;
    int top1;
    int top2;
    int size;

    stack(int s)
    {
        this->size = s;
        this->top1 = -1;
        this->top2 = s;
        this->arr = new int[s];
    }

    void push1(int data)
    {
        if(top2 - top1 > 1)
        {
            top1++;
            arr[top1] = data;
        }

        else
        {
            cout<<"stackoverflow!!!";
        }
    }

    void push2(int data)
    {
        if(top2 - top1 > 1)
        {
            top2--;
            arr[top2] = data;
        }

        else
        {
            cout<<"stackoverflow!!!";
        }
    }

    int peek1()
    {
        if(top1 == -1)
        {
            cout<<"empty stack"<<endl;
        }

        else
        {
            return arr[top1];
        }
    }

    int peek2()
    {
        if(top1 == this->size)
        {
            cout<<"empty stack"<<endl;
        }

        else
        {
            return arr[top2];
        }
    }

    void print1(int* &arr, int top1)
    {
        if(top1 == -1)
        {
            cout<<"stack is empty!!"<<endl;
        }

        else
        {
            for(int i = top1;i>=0;i--)
            {
                cout<<arr[i]<<endl;
            }
        
        }
    }

    void print2(int* &arr, int top2)
    {
        if(top1 == this->size)
        {
            cout<<"stack is empty!!"<<endl;
        }

        else
        {
            for(int i = top2;i<this->size;i++)
            {
                cout<<arr[i]<<endl;
            }
        
        }
    }
};

int main()
{
    stack s1(6);
    s1.push1(5);
    s1.push1(4);
    s1.push1(9);
    s1.push2(2);
    s1.push2(7);


    cout<<s1.peek1()<<endl;
    cout<<s1.peek2()<<endl;
    cout<<endl<<endl;
    s1.print1(s1.arr,s1.top1);
    cout<<endl<<endl;
    s1.print2(s1.arr,s1.top2);

}