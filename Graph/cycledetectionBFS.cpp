#include<bits/stdc++.h>
using namespace std;

bool solve(int node, unordered_map<int, list<int>> &adjL, unordered_map<int, bool> &visited, unordered_map<int, int> &parent){

    parent[node] = -1;
    queue<int> q;
    q.push(node);
    visited[node] = 1;

    while(!q.empty()){
        int frontnode = q.front();
        q.pop();
        for(auto i : adjL[frontnode]){
            if(visited[i] and i != parent[frontnode]){
                return true;
            }
            if(!visited[i]){
                q.push(i);
                visited[i] = 1;
                parent[i] = frontnode;
            }
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
    unordered_map<int, int> parent;

    bool detect;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            detect = solve(i, adjL, visited, parent);
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