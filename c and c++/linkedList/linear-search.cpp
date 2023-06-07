#include <iostream>
using namespace std;

int linearSearch(int arr[],int n, int num);

int main()
{
    int len, arr[len], key;
    cout<<"enter the length of your array : "<<endl;
    cin>>len;
    for (int i = 0; i < len; i++)
    {
        cout<<"enter "<<len << " elements of your array: "<<endl;
        cin>>arr[i];
    }
    
    cout<<"enter the number who's index you wish to find out: "<<endl;
    cin>>key;
    if(linearSearch(arr,len,key) == -1)
    {
        cout<<"the entered number is not in the list!!" <<endl;
    }
    else
    {

    cout<<"key is at position: " <<linearSearch(arr, len, key) + 1 <<endl;
    }
    
}


int linearSearch(int arr[],int n, int num)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == num)
        {
            return i;
        }

        else{
            return -1;
        }
    }

    
}