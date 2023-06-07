#include <iostream>
using namespace std;

int fib(int a[], int n)
{
    if(a[n] == 0)
    {
        if(n == 0)
            a[n] = 0;

        if(n == 1)
            a[n] = 1;

        a[n] = fib(a,n-1) + fib(a, n-2);
    return a[n];

    
    }    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}

int main()
{
    int n = 5;
    int a[n]{};
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }cout<<endl;

    fib(a, n);

    // for(int i=0;i<5;i++){
    //     cout<<a[i]<<" ";
    // }cout<<endl;
}