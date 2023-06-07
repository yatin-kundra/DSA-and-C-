#include <iostream>
using namespace std;

void bubbleSort(double arr1[], int arr2[], int arr3[], int n)
{
    for(int i=0; i < n-1; i++)
    {
        for(int j=0; j < n-i-1; j++)
        {
            if(arr1[j] > arr1[j+1])
            {
                swap(arr1[j] , arr1[j+1]);
                swap(arr2[j] , arr2[j+1]);
                swap(arr3[j] , arr3[j+1]);
                

            }
        }
        
    }
}

void display(double arr1[], int arr2[], int arr3[], int n)
{
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr1[i]<<" ";
    }cout<<endl;

    for(int i=n-1;i>=0;i--)
    {
        cout<<arr2[i]<<" ";
    }cout<<endl;

    for(int i=n-1;i>=0;i--)
    {
        cout<<arr3[i]<<" ";
    }cout<<endl;
}

int main()
{
    int w[] = {15, 8, 7, 10, 20, 25, 18, 10};
    int p[] = {13, 8, 4, 11, 18, 15, 10, 12};
    // int n[] = sizeof(w[]) / sizeof(int);
    int n = 8;
    double f [n] ;
    int sack = 83;
    int val = 0;

    for(int i=0; i<n;i++)
    {
        f[i] = (double)p[i] / w[i];
    }

    bubbleSort(f,w,p,n);
    display(f,w,p,n);

    for(int i=n-1;i>=0;i--)
    {
        if(sack>w[i])
        {
            sack = sack - w[i];
            val += p[i];


        }

        else
        {
            val += ((double)sack/w[i])*p[i];
            sack = (double)sack/w[i];
            break;
        }
    }

    cout<<"price = " << val;
    
}
