#include <iostream>
using namespace std;

void bubbleSort(int val[5], int dl[5], int n)
{
    // char temp='n';
    for(int i=0; i < n-1; i++)
    {
        for(int j=0; j < n-i-1; j++)
        {
            
            if(val[j] > val[j+1])
            {
                 swap(val[j] , val[j+1]);
                //  char* temp = "z";
                // temp = ( char*)jbs[i];
                // temp=jbs[j+1];
                // jbs[j+1]=jbs[j];
                // jbs[j]=temp;
                //     //  char*(jbs[i]) = jbs[i+1]( char*);    // idk how to swap char
                 swap(dl[j] , dl[j+1]);
                
                
            }
        }
        
    }
}

void display(int v[],   int dl[], int n)
{
    for(int i=n-1; i>=0; i--)
    {
        cout<<v[i] <<" ";
    }
    cout<<endl;

    // for(int i=n-1; i>=0; i--)
    // {
    //     cout<<jb[i] <<" ";
    // }
    // cout<<endl;

    for(int i=n-1; i>=0; i--)
    {
        cout<<dl[i] <<" ";
    }
    cout<<endl;
}

int main()
{

    // char jobs[5] = {'a','b','c','d','e'};

    int dl[5] = {2, 1, 2, 1, 3};

    int value[5] = {100, 19, 27, 25, 15};

    int n = 5;

    bubbleSort(value, dl, n);
    

}