#include<bits/stdc++.h>
using namespace std;

void solve(int node, unordered_map<int, list<int>> adjL, unordered_map<int, bool> &visited, unordered_map<int, int> &parent){
    queue<int> q;
    q.push(node);
    visited[node] = 1;
    parent[node] = -1;

    while(!q.empty()){
        int front = q.front();
        q.pop();
        for(auto i : adjL[front]){
            if(!visited[i]){
                q.push(i);
                visited[i];
                parent[i] = front;
            }
        }
    }
}

vector<int> shortestPath(int v, int e, int s, int t, vector<vector<int>> edges){
    unordered_map<int, list<int>> adjL;
    for(int i=0;i<e;i++){
        int x = edges[i][0];
        int y = edges[i][1];

        adjL[x].push_back(y);
        adjL[y].push_back(x);
    }

    unordered_map<int, bool> visited;
    unordered_map<int, int> parent;
    vector<int> ans;

    for(int i=0;i<v;i++){
        if(!visited[i]){
            solve(i, adjL, visited, parent);
        }
    }

    ans.push_back(t);
    int papa = parent[t];
    while(papa != src){
        ans.push_back(papa);
        papa = parent[papa];
    }
    ans.push_back(papa);

    reverse(ans.begin(), ans.end());
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

    int s;
    cin>>s;

    int t;
    cin>>t;

    shortestPath(v, e, s, t, edges);
    
    return 0;
}