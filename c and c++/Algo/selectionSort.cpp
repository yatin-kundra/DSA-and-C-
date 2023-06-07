// selection sort -->
// we select a number with the first loop and with the second loop we find the smallest number and swap two number
// so each round will give the samllest number its rightful position 

#include <iostream>
using namespace std;

void selectionSort(int arr[],int n)
{
    for (int i = 0; i < (n-1); i++)
    {
        int min = i;

        // to find the minimum number 
        for(int j = i+1; j < n; j++ )
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }  
        }
        swap(arr[i], arr[min]);
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
    display(arr,n);
    selectionSort(arr,n);
    display(arr,n);

}