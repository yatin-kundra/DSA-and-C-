#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int piviot = arr[s];
    int count = 0;

    for(int i=s+1; i<=e; i++)
    {
        if(arr[i] < piviot)
        {
            count++;
        }
    
    }

        int pindex = s + count;
        swap(arr[s], arr[pindex]);

        int i = s;
        int j = e;

        while(i<pindex && j>pindex)
        {
            while (arr[i] < arr[pindex])
            {
                i++;
            }

            while (arr[j] > arr[pindex])
            {
                j--;
            }
            
            if(i < pindex && j > pindex)
            {
                swap(arr[i++], arr[j--]);
            }
            
        }
    
}

void quickSort(int arr[], int s, int e)
{
    int p = partition(arr, s, e);

    // base case
    if(s>=e)
    {
        return ;
    }


    // for left side
    quickSort(arr,s ,p-1 );

    // for right side
    quickSort(arr,p+1 ,e);
}

int main()
{
    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int size = 10;
    quickSort(arr,0,size);

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;




} 