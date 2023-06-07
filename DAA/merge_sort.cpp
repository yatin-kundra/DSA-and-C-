#include <iostream>
using namespace std;

int merge(int arr, int s, int e)
{
    
}

void mergeSort(int arr, int s , int e)
{
    if(s > e)
    {
        return ;
    }

    int mid = (s+e)/2;
    mergeSort(arr, mid+1, e);
    mergeSort(arr, s, mid);
    merge(arr, s, e);
}

int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = 9;


}