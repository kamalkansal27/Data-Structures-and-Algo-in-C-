// To find the distance from the source node to all other nodes.
#include<bits/stdc++.h>
using namespace std;

class Graph{

    public:

    unordered_map<int, list<pair<int, int>>> adjL;

    void addEdge(int u, int v, int w){
        pair<int, int> p = make_pair(v, w);
        adjL[u].push_back(p);
    }
    void printlist(){
        for(auto i : adjL){
            cout<<i.first<<" -> ";
            for(auto j : i.second){
                cout<<j.first<<", "<<j.second<<" ";
            }
            cout<<endl;
        }
    }
    void topoSort(int node, stack<int> &s, unordered_map<int, bool> &visited){
        visited[node] = 1;
        for(auto i : adjL[node]){
            if(!visited[i.first]){
                topoSort(i.first, s, visited);
            }
        }
        s.push(node);
    }
    void getShortestPath(int node, unordered_map<int, int> &distance, stack<int> &s){
        distance[node] = 0;
        while(!s.empty()){
            int top = s.top();
            s.pop();
            if(distance[top] != INT_MAX){
                for(auto i : adjL[top]){
                    int temp = distance[top] + i.second;
                    distance[i.first] = min(distance[i.first], temp);
                }
            }
        }
        for(auto i : distance){
            cout<<i.first<<" -> "<<i.second<<endl;
        }
    }
};

int main(){

    int n;
    cout<<"Enter the number of nodes - ";
    cin>>n;

    int e;
    cout<<"Enter the number of edges - ";
    cin>>e;

    Graph g;
    for(int i=0;i<e;i++){
        int u, v, w;
        cin>>u>>v>>w;

        g.addEdge(u, v, w);
    }   

    unordered_map<int, bool> visited;
    stack<int> s;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            g.topoSort(i, s, visited);
        }
    }

    unordered_map<int, int> distance(n, INT_MAX);

    int src;
    cout<<"Enter the source node - ";
    cin>>src;
    g.getShortestPath(src , distance, s);

    

    return 0;
}