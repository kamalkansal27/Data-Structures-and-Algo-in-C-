#include<bits/stdc++.h>
using namespace std;

void topoSort(int node, unordered_map<int, list<int>> adjL, unordered_map<int, bool> &visited, stack<int> &s){
    visited[node] = 1;
    for(auto nbr : adjL[node]){
        if(!visited[nbr]){
            topoSort(nbr, adjL, visited, s);
        }
    }
    s.push(node);
}

void dfs(int node, unordered_map<int, list<int>> tranpose, unordered_map<int, bool> &vis){
    vis[node] = 1;
    for(auto nbr : tranpose[node]){
        if(!vis[nbr]){
            dfs(nbr, tranpose, vis);
        }
    }
}

int stronglyConnectedComponents(int v, vector<vector<int>> &edges){
    // Prepare adjacency list.
    unordered_map<int, list<int>> adjL;
    for(int i=0;i<edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adjL[u].push_back(v);
    }
    
    // Step 1 - topological sort
    unordered_map<int, bool> visited;
    stack<int> s;
    for(int i=0;i<v;i++){
        if(!visited[i]){
            topoSort(i, adjL, visited, s);
        }
    }

    // Step 2 - Tranpose the graph.
    unordered_map<int, list<int>> tranpose;
    for(int i=0;i<edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];

        tranpose[v].push_back(u);
    }

    // Step 3 - Dfs on basis of topological order and count SCC.
    int count = 0;
    unordered_map<int, bool> vis;
    while(!s.empty()){
        int Node = s.top();
        s.pop();

        if(!vis[Node]){
            dfs(Node, tranpose, vis);
            count++;
        }
    }

    return count;
}

int main(){
    return 0;
}