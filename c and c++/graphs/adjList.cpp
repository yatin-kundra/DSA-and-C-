#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class graph
{
    public:
    // unordered graph
    // int _UNORDERED_MAP_H adj( );             // idk what but when i didn't put namespace
    unordered_map<int, list<int>> adj;
    
    void creatEdge(int v, int u, bool direction)
    {
        // directed if direction == 1
        adj[v].push_back(u);    // v and u are both nodes , this line means access u using key: v, like v pointing to u

        if(direction == 1)
        {
            adj[u].push_back(v);
        }
    }

    // printing the adjlist
    void printingGraph()
    {
        for(auto i : adj)     // i will iterate over all the entries in a map
        {
            cout<<i.first<<"-> ";   // i.first tells the first entiy in map i.e key
            for(auto j : i.second)  // i.second tells the second entity in a map i.e value   // j will iterate over all the entries in a map
            {
                cout<<j;
            }
            cout<<endl;
        }
    }


    
};

int main()
{
    int n, m;
    cout<<"enter the number of nodes: ";
    cin>>n;
    cout<<endl<<"enter the number of edges: ";
    cin>>m;

    graph g;

    for(int i=0; i<m; i++)
    {
        int v,u;
        cin>>v >> u;
        g.creatEdge(v, u, 0);
    }

    g.printingGraph();


}