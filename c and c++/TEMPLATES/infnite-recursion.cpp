#include <iostream>
#include <math.h>
using namespace std;

int loop(int a)
{
    cout<<a<<endl;
    // cout<<541;
    int b = 0;
    b =  pow(a,a);
        // cout<<b<<endl;

    loop(a+1);
}

int main()
{
    loop(2);
}

