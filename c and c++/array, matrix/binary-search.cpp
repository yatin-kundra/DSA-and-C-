#include <iostream>
using namespace std;

void swap(int a, int b);
void sort(int arr[], int n);
int binary(int arr[],int len,int key);

int main()
{
    int len, arr[len], key;
    len = 6;
    cout<<"enter length of array: "<<endl;
    cin>>len;
    for(int i=0;i<len;i++)
    {
        cout<<"enter the values: "<<endl;
        cin>>arr[i];
    }  

    cout<<"enter the number you wish to find out "<<endl;
    cin>>key;

    sort(arr,len);
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    
}


void sort(int arr[], int n)
{
    int min=0;
    for(int i=0; i<n; i++)
    {
        // int temp;
        if(arr[min] > arr[i])
        {
            swap(arr[min],arr[i]);
            min = i; 
        }
    }
}

int binary(int arr[],int len,int key)
{
    int mid = len/2;
    // int start, end;
    // int right[n];
    // int left[n];
    if(arr[mid] == key)
    {
        return mid;
    } 

    if(arr[mid] > key)
    {
        return binary(arr, mid,key);
    }
    else
    return binary(arr,len,key);

}

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b= temp;
}