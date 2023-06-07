#include <iostream>
using namespace std;

int counting(int n)
{
    if(n == 0)
    return 1;

    // this is tail recurtion , and is printing counting backwords
    // cout<<n<<endl;
    // return counting(n-1);


    // this is head recurtion , and is printing forwards counting
    counting(n-1);
    cout<<n<<endl;

}

int main()
{
    int n;
    cin>>n;

    cout<<endl;

    counting(n);
}