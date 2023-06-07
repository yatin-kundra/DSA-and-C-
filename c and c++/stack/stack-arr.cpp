#include <iostream>
using namespace std;

class stack{
    public:
    int *arr;
    int top;
    int size;

    stack(int size)
    {
        this->size = size;
        this->top = -1;
        arr = new int[size];
    }

    void push(int element)
    {
        if(top == size-1)
        {
            cout<<"stack is full!!"<<endl;
        }

        else
        {
            top++;
            arr[top] = element;
        }
    }

    void pop()
    {
        if(top == -1)
        {
            cout<<"list is empty, nothig to pop"<<endl;
        }

        else
        {
            top--;
        }
    }

    int peek()
    {
        if(top == -1)
        {
            cout<<"list is empty"<<endl;
        }

        else
        {
            return arr[top];
        }
    }

    bool isEmpty()
    {
        if(top == -1)
        {
            return true;
        }

        else
        {
            return false;
        }
    }
    

    void display(int* &arr, int top)
    {
        if(top == -1)
        {
            cout<<"stack is empty !!"<<endl;
        }

        // cout<<"the items in stack are ==>" <<endl;

        else
        {
            for(int i = top; i>=0;i--)
            {
                // cout<<i<<endl;
                cout<<arr[i]<<endl;
            }
        }
    }

};

int main()
{
    stack s1(5);
    // entering values
    s1.push(8);
    s1.push(6);
    s1.push(4);
    s1.push(5);

    cout<<s1.peek() << endl;

    s1.push(1000);

    cout<<s1.peek() << endl;

    s1.push(8562);

    cout<<s1.peek() << endl;

    s1.display(s1.arr,s1.top);

    
 

    
}