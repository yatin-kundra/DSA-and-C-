#include <iostream>
using namespace std;

class sort
    {
        public:
        int st[4] = {};
        int ft[4] = {};
        sort(int st[], int ft[])  
        {
            
                for(int i =0;i<3;i++)
                {
                    for(int j = 0; j<4-i-1; j++)
                    {
                        if(st[j] > st[j+1])
                        {
                            swap(st[j], st[j+1]);
                            swap(ft[j], ft[j+1]);
                        }
                    }
                }
                
        }
        
        void dis(int st[], int ft[], int n)
        {
            cout<<"ST: ";
            for(int i=0; i<n;i++)
            {
                
            cout << st[i]<<" " ;
            }cout<<endl;
            
            cout<<"FT: ";
            for(int i=0; i<n;i++)
            {
              
                cout <<ft[i]<<" " ;
            }
        }
    };

int main()
{
    int st[] = {38, 25, 12, 10};
    int ft[] = {48, 30, 20, 15};
    sort s1(st, ft);
    s1.dis(st, ft, 4);

    // after sorting 
    //ST: 10 12 25 38 
    //FT: 15 20 30 48
    // cout<<s1.st[1]<<endl;
    int count = 0;
    int arr[] = {};
    int x = 0;
    // cout<<06;
    for(int i=0;i<4;i++)
    {
            //  cout<<i<<endl;
            // cout<<s1.st[0]<<endl;
        if(st[i] > x)
        {
       
            count++;
            // cout<<1;
            arr[count-1] = st[i]; ;
            x = ft[i];      
        }
        
    }
    
    cout<<endl<<"no of processes done : "<<count<<endl;
    for(int i=0; i<count;i++)
    {
        cout<<arr[i] <<" ";
    }cout<<endl;

}