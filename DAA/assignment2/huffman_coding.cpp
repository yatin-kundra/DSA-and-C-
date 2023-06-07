#include <iostream>
using namespace std; 

class heap
{
    public:
    int size;
    int arr[100];
    char alp[100];

    heap()
    {
        arr[0] = -1;
        alp[0] = -1;
        size = 0;
    }

    void insert(int val, char letter)
    {
        int index = 0;
        size++;
        index = size;
        arr[size] = val;
        alp[size] = letter;

        int node_idx = 0; 

        if(size > 1)
        {
            node_idx = arr[index] + arr[index-1];
        size++;
        arr[size] = node_idx;
        alp[size] = ' ';
        }
        
        while(index > 1)
        {
            int parent = index/2;
            if(arr[index] > arr[parent])
            {
                swap(arr[index], arr[parent]);
                swap(alp[index], alp[parent]);
                index = parent;
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

        for(int i=1; i<=size; i++)
        {
            cout<<alp[i];
        }cout<<endl;
    }
};

void coding(int arr1[], char arr2[], int size)
{
    if(size <= 1)
        return ;

    
       cout<<0;
       coding(arr1, arr2, size-2);

       cout<<1;
       coding(arr1, arr2, size-1);
}


int main()
{
    char alpha[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    int freq[] = {5, 9, 12, 13, 16, 45};
    int n = 6;

    for(int i=0; i < n-1; i++)
    {
        for(int j=0; j < n-i-1; j++)
        {
            if(freq[j] > freq[j+1])
            {
                swap(freq[j] , freq[j+1]);
                swap(alpha[j], alpha[j+1]);
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<alpha[i] <<" ";
    }
    cout<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<freq[i] <<" ";
    }
    cout<<endl;

    // max heap

    heap h1;

    for(int i=0;i<n;i++)
    {
        h1.insert(freq[i], alpha[i]);
    }

    h1.print();

    // size-2  -> left
    // size-1  -> right
    // update size where you go

    coding(freq, alpha, h1.size);



}