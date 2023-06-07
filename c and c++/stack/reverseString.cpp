#include <iostream>
#include <string>
using namespace std;

class stack{
    public:
    int* arr;
    int top;
    int size;

    stack(int size)
    {
        this->top = -1;
        this->size = size;
        arr = new int(size);
    }
    
    void push(int data)
    {
        top++;
        arr[top] = data;

    }

    void display(int* &arr, int top)
    {
        if(top == -1)
        {
            cout<<"stack is empty!!"<<endl;
        }

        else
        {
            for(int i=top; i>=0; i--)
        {
            cout<<arr[i]<<endl;
        }
        }
        
    }

    void pop()
    {
        if(top == -1)
        {
            cout<<"list is empty"<<endl;
        }

        else
        {
            top--;
        }
        
    }
};




int main()
{
    stack s1(5);

    s1.push(1);
    s1.push(1);
    s1.push(1);
    s1.push(1);
    s1.push(5);

    s1.display(s1.arr, s1.top);
    cout<<endl;
    // s1.pop();

    s1.display(s1.arr, s1.top);

}


    
    

