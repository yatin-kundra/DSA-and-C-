#include <iostream>
using namespace std;

int qpiviot(int arr[], int s, int e)
{
    int p = arr[e];
    int i = s, j = e;
    
    while(i<j)
    {cout<<1;
        while(arr[i] < p)
        {
            i++;
        }
        
        while(arr[j] > p)
        {
            j--;
            
        }
        
        if(i < j)
        {
            swap(arr[i], arr[j]);
            
        }
        
        if(i > j)
        {
            swap(p, arr[i]);
            return i;
        }
    }
    
}

void qucikSort(int arr[], int s, int e)
{
    if(s>e)
    {
        return;
    }
    
    
    int piviot = qpiviot(arr, s, e);
    qucikSort(arr, s, piviot-1);
    qucikSort(arr, piviot+1, e);
    
}

void display(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main()
{
    int arr[10] = {0,2, 6, 8, 4, 8, 9, 3, 1, 5};
    display(arr, 10);
    qucikSort(arr, 0 , 10);
    display(arr, 10);
    
    
}