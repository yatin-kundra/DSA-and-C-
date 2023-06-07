#include <iostream>
using namespace std;

void insert(int arr[], int num, int i);

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9};
    int x,ind;
    cout<<"enter the number and the positon you wish to inset it at: ";
    cin>>x;
    cin>>ind;
    insert(arr,x,ind);

    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}

void insert(int arr[],int num, int i)
{
    int len = 10;
    for(int j=len-1;j>i;j--)
    {
        arr[j] = arr[j-1];
       
    }
    arr[i] = num;
}