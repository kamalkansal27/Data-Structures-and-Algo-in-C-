#include<bits/stdc++.h>
using namespace std;

template <typename T>

class Graph{

    public:   

    unordered_map<T, list<T> > adjL;
    void addEdge(T u, T v, bool direction){
        // Direction = 0 -> undirected.
        // Direction = 1 -> directed.
        adjL[u].push_back(v);
        if(direction == 0){
            adjL[v].push_back(u);
        }
    }

    void print(){
        for(auto i : adjL){
            cout<<i.first<<" -> ";
            for(auto j : i.second){
                cout<<j<<", ";
            } 
            cout<<endl;
        }
    }

};

int main(){

    int n;
    cout<<"Enter the number of nodes - ";
    cin>>n;

    int m;
    cout<<"Enter the number of edges - ";
    cin>>m; 

    Graph <int> g;

    for(int i=0;i<m;i++){
        int u, v;
        cin>>u>>v;

        g.addEdge(u, v, 0);
    }

    g.print();

    return 0;
}