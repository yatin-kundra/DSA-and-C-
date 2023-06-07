#include <iostream>
using namespace std;

void bubblesort(int arr[], int size)
{
    if(size ==0 || size == 1)
    {
        return ;
    }

    for(int i=0; i<size-1;i++)
    {
        if(arr[i] > arr[i+1])
        {
            swap(arr[i], arr[i+1]);
        }

        bubblesort(arr, size-1);
    }
}

void display(int arr[], int size)
{
    for(int i=0; i<size;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main()
{
    int arr[] = {8, 7, 6, 5, 4, 3, 2, 1};
    int size = 8;

    display(arr, size);
    
    bubblesort(arr, size);

    display(arr, size);
}