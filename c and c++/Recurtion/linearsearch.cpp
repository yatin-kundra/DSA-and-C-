#include <iostream>
using namespace std;

bool search(int* arr, int size, int key)
{
    if(size == 0)
        return false ;

    if(arr[0] == key)
        return true;

    else
    {
        search(arr+1, size-1, key);
    }
}

int main()
{
    int arr[] = {5, 6, 9, 3, 6, 7, 1, 0, 4};
    int size = sizeof(arr) / sizeof(int);
    int key;
    cin>>key;

    int idk = search(arr, size, key);

    if(idk)
    {
        cout<<"found it"<<endl;
    }

    else
    {
        cout<<"not found"<<endl;
    }

}