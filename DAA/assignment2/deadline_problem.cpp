#include <iostream>
using namespace std;

int main()
{

    char jobs[] = {'a', 'b', 'c', 'd', 'e'};

    int dl[5] = {2, 1, 2, 1, 3};

    int value[5] = {100, 19, 27, 25, 15};

    int n = 5;

    // sorting 
    for(int i=0; i < n-1; i++)
    {
        for(int j=0; j < n-i-1; j++)
        {
            if(value[j] > value[j+1])
            {
                swap(value[j] , value[j+1]);
                swap(dl[j], dl[j+1]);
                swap(jobs[j], jobs[j+1]);

            }
        }
        
    }

    // printing
    for(int i=n-1; i>=0; i--)
    {
        cout<<jobs[i] <<" ";
    }
    cout<<endl;

    for(int i=n-1; i>=0; i--)
    {
        cout<<value[i] <<" ";
    }
    cout<<endl;

    for(int i=n-1; i>=0; i--)
    {
        cout<<dl[i] <<" ";
    }
    cout<<endl;

    // finding the maximum time to a deadline for a job

    int max = 0;
    for(int i=0;i<n;i++)
    {
        if(dl[i]>max)
        {
            max = dl[i];
        }
    }

    // time passing is denoted by t
    int t = 0;
    int inc_in_value = 0;
    for(int i=n-1; i>=0; i--)
    {
        if(t<=dl[i] && t<=max)
        {
            inc_in_value += value[i];
            cout<<jobs[i]<<" ";
            t++;
        }
    }cout<<endl;

    cout<<"Total value in the end is: "<<inc_in_value<<endl;

    
    


}