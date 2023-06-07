// bubble sort --> 
// last element goes to its right place afer each round, first loop is the loop deciding the round 
// second loop places the last element which is not at its rightful place at right place

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
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 3, 2, 1, 0, 0};
    int n = sizeof(arr) / sizeof(int);
    cout<<"unsorted array: ";
    display(arr, n);
    bubbleSort(arr, n);
    cout<<endl<< "sorted array: ";
    display(arr, n);
    cout<<endl;
}