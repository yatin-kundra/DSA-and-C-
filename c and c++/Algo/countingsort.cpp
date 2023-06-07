#include <iostream>
#include <algorithm>
using namespace std;

void countingsort(int arr[], int n)
{
    // k -> size of count array  ==== this for loop is not working 
    int k = arr[0];
    for(int i=0; i>n; i++)
    {
        k = max(k, arr[i]);
    }
    
    
    int count[10] = {0};

    // this array is telling frequency now
    for(int i=0; i<=n; i++)
    {
        count[arr[i]]++;
    }

    // now we need to tell this array the position of the number . i.e we will add pervious and curerrent
    for(int i=1; i<=n; i++)
    {
        count[i] += count[i-1];
    }

    int output[n] = {0};
    // now creating an output array i.e a sorted array
    for(int i=0; i<n; i++)
    {
        output[--count[arr[i]]] = arr[i];
    }

    for(int i=0; i<n; i++){
        arr[i] = output[i];
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
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 3, 2, 1, 0, 0};
    int size = sizeof(arr) / sizeof(int);

    display(arr, size);

    countingsort(arr, size);
    display(arr, size);
    // int k = arr[0];
    // for(int i=0; i>size; i++)
    // {
    //     k = max(k, arr[i]);
    // }
    // cout<<k<<endl;
    
    

    

}