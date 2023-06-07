#include <iostream>
#include <stdio.h>
using namespace std;


int main()
{
    int arr[] = {5,6,84,62,47,255,5,25,6};
    int len = sizeof(arr) / sizeof(arr[0]);
    // for(int i=0;i<len;i++)
    // {
    //     cout<<"Enter number in position "<< i+1 <<endl;
    //     cin>>arr[i];
    // }
    int counter=0;
    for(int i=0;i<len;i++)
    {
       for(int j=len-1;j>i;j--) 
        {
            if(arr[i] == arr[j])
            {
                
                counter++;
                int rep = j;
                for(int l=j;l<len;l++)
                {
                    arr[l] = arr[l+1];
                }
                len -= 1;
            }

        }
    }

    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<endl;
    }
}