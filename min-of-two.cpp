#include<iostream>
using namespace std;

class vaals{
    int a,b;
    public:
    vaals(int i , int j)
    {
        a=i;
        b=j;

    }
    friend class miin;          // telling class vaals that miin is a friend so it can access private data
};

class miin{
    public:
    int min(vaals x);       // function prototype 
};

int miin::min(vaals x)      // fuction 
{
    return x.a<x.b ? x.a : x.b;
}


int main()
{
    vaals obj(10,20);
    miin m;
    cout<< m.min(obj);

    return 0;
}