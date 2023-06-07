#include <iostream>
using namespace std;

void print(int arr[], int start, int end)
{
    cout<<"array : ";
    for(int i=start; i<end; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int binarySearch(int arr[], int start, int end, int key)
{
    int mid = (start + end) / 2;
    print(arr, start, end);
    cout<<endl;
    // cout<<start<<endl<<endl;

    if(start > end)
    {
        return -1;
    }

    if(arr[mid] == key)
    {
        return mid;
    }
    
    // left side
    else if(arr[mid] > key)
    {
        binarySearch(arr, start, mid-1, key);
    }

    // right side
    else
    {
        binarySearch(arr, mid+1, end, key);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(int);
    int key;
    cin>>key;
    if(binarySearch(arr, 0, size-1, key) == -1)
    {
        cout<<"key is not in the array!!"<<endl;
    }

    else
    cout<<"the index of key is: "<<binarySearch(arr, 0, size-1, key)<<endl;

}