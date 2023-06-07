#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[] {5,6,5};
    if (n > sizeof(arr))
    {
        int i;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
         int arr1[]{};

    for(int j; j<n ; j++)
    {
        arr1[j] = arr[i];

    }

    }
    }
    else {
        printf("the value of n is greater than the size of it");
    }

   

    return 0;
}
