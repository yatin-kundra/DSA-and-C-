#include <iostream>
using namespace std;

int insertionSort(int arr[], int n)
{
    int key = 0;
    for (int j = 1; j < n; j++)
    {
        key = arr[j];
        int i = 0;
        i = j - 1;
        while(i>=0 && arr[i] > key)
        {
            arr[i+1] = arr[i];
            i--;
            arr[i+1] = key;
        }
    } 
    return arr[n];  
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
    int A[] { 2, 9, 7, 5, 6, 1, 8, 0, 4};   


    int size = sizeof(A)/ sizeof(int);

    insertionSort(A,size);
    display(A,size);


    

}