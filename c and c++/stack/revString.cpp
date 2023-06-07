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

    // inputing the given string into array
    void intostack(string str)
    {

    }
};