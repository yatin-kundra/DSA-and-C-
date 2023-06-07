#include <iostream>
using namespace std;

int main()
{
    int n , count;
    cout<<"enter n and count : ";
    cin>> n >> count;
    for(int i=0; i<count; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl<<"  ";

        for(int k=0; k<i*2; k++)
        {
            cout<<" ";
        }
    }
}