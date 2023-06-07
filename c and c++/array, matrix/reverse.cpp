// without using additional array :)

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
 int arr[] = {0,1,2,3,4,5,6,7,8,9};
 int n = sizeof(arr)/sizeof(arr[0]);
 int temp1,temp2;
 for(int i=0;i<(n/2);i++)
 {
    temp1 = arr[i];
    temp2 = arr[n-1-i]; 
    arr[n-i-1] = temp1;
    arr[i] = temp2;
 }  

 for(int i=0;i<n;i++)
 {
    cout<<arr[i]<<" ";
 }    
 cout<<endl;
}