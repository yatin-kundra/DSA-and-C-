#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class graph
{
    public: 
    unordered_map <int, list <int>> adjlist;

    // now we have to insert the key and value 
    void creatEdge(int v, int u)
    {
        adjlist[v].push_back(u);
        adjlist[u].push_back(v);
    }

    // printing 
    void printingGraph()
    {
        for(auto i : adjlist)
        {
            cout<<i.first<<" -> ";
            for(auto j : i.second)
            {
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }    

    //void 
};

int main()
{
    int n,m;
    cout<<"enter no. of verteses: "<<endl;
    cin>>n;
    cout<<"enter no. of verteses: "<<endl;
    cin>>m;

    graph g;
    for(int i=0; i<m; i++)
    {
        int u, v;
        cin>>u >>v;
        g.creatEdge(v,u);
    }

    g.printingGraph();
}