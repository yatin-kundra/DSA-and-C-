#include <iostream> 
using namespace std;

int binarySearch(int arr[], int n, int s, int e, int key)
{
    while(s<e)
    {
        int mid = (s+e)/2;
        if(key== arr[mid])
        {
            return mid;
        }

        else if(key > arr[mid])
        {
            s = mid + 1;
            mid = (s+e)/2;
        }

        else
        {
            e = mid;
            mid = (s+e)/2;
        }


    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 9;

    cout<<"Your key:3 is at "<<binarySearch(arr, n, 0, n-1, 3) + 1 <<"rd paositon."<<endl;

}