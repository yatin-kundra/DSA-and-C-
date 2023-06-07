#include <iostream>
using namespace std;

int factorial(int n)
{
    // base case is mendetory in recurtion and you always have to return something

    if(n == 0)
    {
        return 1;
    }
    // cout<<n<<endl; 

    return n * factorial(n-1);
}

int main()
{
    int n;
    cout<<"enter a number: " <<endl;
    cin>>n;

    cout<<factorial(n) <<endl;
}