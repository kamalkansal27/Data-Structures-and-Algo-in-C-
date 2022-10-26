#include<bits/stdc++.h>
using namespace std;

void solve(int node, unordered_map<int, list<int>> adjL, unordered_map<int, bool> &visited, stack<int> &s){
    visited[node] = 1;
    for(auto i : adjL[node]){
        if(!visited[i]){
            solve(i, adjL, visited, s);
        }
    }
    s.push(node);
    return ;
}

vector<int> topologicalSort(int v, int e, vector<vector<int>> edges){
    // prepare adjacency list
    unordered_map<int, list<int>> adjL;
    for(int i=0;i<e;i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adjL[u].push_back(v);
    }
    unordered_map<int, bool> visited;
    stack<int> s;
    for(int i=0;i<v;i++){
        if(!visited[i]){
            solve(i, adjL, visited, s);
        }
    }

    vector<int> ans;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}

int main(){

    int v;
    cout<<"Enter the number of nodes - ";
    cin>>v;

    int e;
    cout<<"Enter the number of edges - ";
    cin>>e;

    vector<vector<int>> edges;
    for(int i=0;i<e;i++){
        int u, v;
        cin>>u>>v;

        edges[i][0] = u;
        edges[i][1] = v;
    }

    topologicalSort(v, e, edges);

    return 0;
}