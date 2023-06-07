// min heap check if its corrct

#include <iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    // max heap
    void insert(int val)
    {
        size++;
        int index = size;
        arr[index] = val;

        while(index > 1)
        {
            int parent = index/2;
            if(arr[index] < arr[parent])
            {
                swap(arr[index], arr[parent]);
                index = parent;
            }

            else
            {
                return ;
            }
        }
    }

    void del()
    {
        // swap(arr[1], arr[size]);
        arr[1] = arr[size];

        size--;
        int index = 1;
        while (index < size)
        {
            int child = index*2;
            if(arr[child] < arr[child+1])
            {
                swap(arr[index], arr[child]);
                index = child;
                
            }

            else if(arr[child] > arr[child+1])
            {
                swap(arr[index], arr[child+1]);
                index = child + 1;
            }

            else
            {
                return ;
            }
        }
        
    }



    void print()
    {
        for(int i=1; i<=size; i++)
        {
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

    // convertion of an array into heap
    void heapify(int arr[], int n, int i)
    {
        int samllest = i;
        int left = i*2;
        int right = i*2 + 1;

        if(left <= n && arr[left] < arr[samllest])
        {
            samllest = left;
        }

        if(right <= n && arr[right] < arr[samllest])
        {
            samllest =  right;
        }

        if(samllest != i)
        {
            swap(arr[samllest], arr[i]);
            heapify(arr, n, samllest);
        }
        
    }
};

int main()
{
    heap h1;
    h1.insert(55);
    h1.insert(54);
    h1.insert(53);
    h1.insert(50);
    h1.insert(52);

    h1.print();

    h1.del();

    h1.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50 };
    int n = 6;

    for(int i = h1.size/2; i>0; i--)
    {
        h1.heapify(arr, n, i);
    }

    for(int i=1; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;


}

