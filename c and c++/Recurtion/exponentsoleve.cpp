#include <iostream>
using namespace std;

// int solve(int a, int b)
// {
//     if(b==0)
//     return 1;

//     a = a * solve(a, b-1);
//     return a;
// }



// this is a better approach 
int power(int a, int b)
{
    if(b==0)
    return 1;

    if(b == 1)
    return a;

    int ans = power(a,b/2);

    if(b%2 == 0)
    return ans * ans;

    else
    return a * ans * ans;

}

int main()
{
    int a;
    int b;
    cin>>a;
    cin>>b;

    // cout<<solve(a,b)<<endl;
    cout<<power(a, b)<<endl;

    
}