#include<bits/stdc++.h>
using namespace std;

bool solve(int node, unordered_map<int, list<int>> &adjL, unordered_map<int, bool> &visited, unordered_map<int, bool> &dfs){
    visited[node] = 1;
    dfs[node] = 1;
    for(auto i : adjL[node]){
        // condition for cycle detection.
        if(visited[i] and dfs[i]){
            return true;
        }
        if(!visited[i]){
            bool detectcycle = solve(i, adjL, visited, dfs);
            if(detectcycle){
                return true;
            }
        }
    }
    dfs[node] = 0;
    return false;
}

int detectCycleInDirectedGraph(int n, int m, vector<vector<int>> &edges){
    // prepare adjacency list.
    unordered_map<int, list<int>> adjL;
    for(int i=0;i<m;i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adjL[u].push_back(v);
    }
    unordered_map<int, bool> visited;
    unordered_map<int, bool> dfs;

    for(int i=0;i<n;i++){
        if(!visited[i]){
            bool detect = solve(i, adjL, visited, dfs);
            if(detect == true){
                return 1;
            }
        }
    }
    return 0;
}

int main(){

    int n;
    cout<<"Enter the number of nodes - ";
    cin>>n;

    int m;
    cout<<"Enter the number of edges - ";
    cin>>m;

    vector<vector<int>> edges;
    for(int i=0;i<m;i++){
        int u, v;
        cin>>u>>v;
        edges[i][0] = u;
        edges[i][1] = v;
    }

    cout<<detectCycleInDirectedGraph(n, m, edges)<<endl;

    return 0;
}