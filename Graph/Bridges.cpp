#include<bits/stdc++.h>
using namespace std;

void solve(int node, unordered_map<int, list<int>> adjL, vector<int> &low, vector<int> &disk, int &timer, int &parent, vector<int> &result){
    visited[node] = true;
    disk[node] = low[node] = timer++;

    for(auto nieghbour : adjL[node]){
        // Back edge
        parent[nieghbour] = node;
        if(visited[nieghbour] == true){
            low[node] = min(low[node], disk[nieghbour]);
        }
        // Parent - Ignore
        if(nieghbour == parent){
            continue;
        }
    }
    low[node] = min
}

vector<vector<int>> findBridges(vector<vector<int>> &edges, int v, int e){
    
    // Prepare adjacency list.
    unordered_map<int, list<int>> adjL;
    for(int i=0;i<e;i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adjL[u].push_back(v);
        adjL[v].push_back(u);
    }
    
    // Declare the data structures required.
    int timer = 0;
    vector<int> disk(v);
    vector<int> low(v);
    int parent = -1;
    unordered_map<int, bool> visited;

    // Intialise the data structures.
    for(int i=0;i<v;i++){
        disk[i] = -1;
        low[i] = -1;
    }

    // Traverse through DFS.
    vector<int> result;
    for(int i=0;i<v;i++){
        if(!visited[i]){
            solve(i, adjL, visited, low, disk, timer, parent, result);
        }
    }
    return result;
}

int main(){

    return 0;
}