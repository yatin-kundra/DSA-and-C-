#include <iostream>
using namespace std;

void merge(int arr[], int s, int e)
{
    int mid = (s+e)/2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // creating 2 array 
    int* first = new int[len1];
    int* second = new int[len2];

    // puting values in the 2 samller arayes

    int k = s;
    for(int i=0; i<len1; i++)
    {
        first[i] = arr[k++];
    }
    
    k = mid+1;
    for(int i=0; i<len2; i++)
    {
        second[i] = arr[k++];
    }

    // till now we have created 2 array from one and now we will merge the 2 new array to creat pervious array just 
    // it will be sorted , meaning we will put the elements of the array first and second int the sorted order in arr
    
    // int arrlen = len1 + len2;

    // for(int i=0; i<arrlen; i++)
    // {
    //     if(first[i] < second[i])
    //     arr[i] = first[i];

    //     else
    //     arr[i] = second[i];
    // }

    int index1 = 0;
    int index2 = 0;
    int indexarr = s;

    while(index1<len1 && index2<len2)
    {
        if(first[index1] < second[index2])
        {
            arr[indexarr++] = first[index1++];
        }

        else
        {
            arr[indexarr++] = second[index2++];
        }
    }

    while(index1 < len1)
    {
        arr[indexarr++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[indexarr++] = second[index2++];
    }
}

void mergesort(int arr[], int s, int e)
{
    if(s>=e)
        return;

    int mid = (s+e)/2;
    // left
    mergesort(arr, s, mid);

    // right
    mergesort(arr, mid+1, e);

    merge(arr, s, e);
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
    int arr[8] = {8, 7, 6, 5, 4, 3, 2, 0};
    int size = 8;
    display(arr, size);
    mergesort(arr, 0, size-1);
    display(arr, size);

}