#include<bits/stdc++.h>
using namespace std;

bool solve(int node, int parent, unordered_map<int, list<int>> &adjL, unordered_map<int, bool> &visited){
    visited[node] = 1;
    for(auto i : adjL[node]){
        if(!visited[i]){
            bool detectcycle = solve(i, node, adjL, visited);
            if(detectcycle) return true;
        }
        if(i != parent){
            return true;
        }
    }
    return false;
}

string cycleDetection(vector<vector<int>> &edges, int n, int m){
    // prepare adjacency list
    unordered_map<int, list<int>> adjL;
    for(int i=0;i<m;i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adjL[u].push_back(v);
        adjL[v].push_back(u);
    }
    unordered_map<int, bool> visited;

    bool detect;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            detect = solve(i, -1, adjL, visited);
            if(detect){
                return "Cycle is Present.";
            }        
        }
    }
    return "Cycle is not Present.";    
}

int main(){

    int n;
    cout<<"Enter the number of vertices - ";
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

    cout<<cycleDetection(edges, n, m)<<endl;

    return 0;
}