#include <iostream>
using namespace std;

bool isSorted(int* arr, int size)
{
    if(size == 0 || size == 1)
        return true;

    if(arr[0] > arr[1])
    {
        return false;
    }

    else
    {
        return isSorted(arr+1,size-1);
    }
}

int main()
{
    int arr[] = {5, 9 , 12, 20, 25, 50};
    int size = sizeof(arr) / sizeof(int);

    int idk = isSorted(arr, size);

    if(idk)
    {
        cout<<"is sorted "<<endl;
    }

    else
    {
        cout<<"is not sorted "<<endl;
    }


}