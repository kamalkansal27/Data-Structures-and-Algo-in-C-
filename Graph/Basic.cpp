#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graphs{

    public:

    unordered_map<int, list<int>> adj;

    void addEdge(int u, int v, bool direction){
        
        // direction = 0 -> undirected
        // direction = 1 -> directed

        adj[u].push_back(v);
        
        // if direction is 0, then we will also add a edge from v to u.
        if(direction == 0){
            adj[v].push_back(u);
        }
    }

    void printAdjList(){
        for(auto i : adj){
            cout<<i.first<<" -> ";
            for(auto j : i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }

};
int main(){

    int n, m;
    cout<<"Enter the number of nodes : ";
    cin>>n;

    cout<<"Enter the number of edges : ";
    cin>>m;

    graphs g;

    for(int i=0;i<m;i++){
        
        int u, v;
        cin>>u>>v;

        g.addEdge(u,v,0);
    }

    g.printAdjList();

    return 0;
}
