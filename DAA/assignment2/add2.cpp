#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i=0; i < n-1; i++)
    {
        for(int j=0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j] , arr[j+1]);
            }
        }
        
    }
}

void display(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i] <<" ";
    }
    cout<<endl;
}

int main()
{
    int st[] = {38, 25, 12, 10};
    int ft[] = { 30, 20, 15, 48};
    bubbleSort(st,4);
    bubbleSort(ft,4);
    display(st,4);
    display(ft,4);
    

    return 0;
}