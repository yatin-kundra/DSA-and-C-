#include <iostream>
#include <stdio.h>
using namespace std;

int min_arr_ele(int arr[], int len);
int main()
{
    int a[] = {10,1,2,3,4,5,6,7,8,9,12};
    int n = sizeof(a)/sizeof(a[0]);
    
    cout<<"to find the minimum element in the array"<<endl;
    // cout<<n<<endl;
    cout<<"size of arr is " << n << endl;
    
    printf("The minimun number present in the array is : %d",min_arr_ele(a,n));

    return 0;
}

    int min_arr_ele(int arr[], int len){
        int min = arr[0];
        for(int i=0;i<len;i++)
        {
            if (min > arr[i])
            {
                min = arr[i];
            }
        }
    return min; 
    }