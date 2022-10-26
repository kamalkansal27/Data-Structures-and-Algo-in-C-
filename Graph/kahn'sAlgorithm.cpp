#include<bits/stdc++.h>
using namespace std;

void solve(int node, unordered_map<int, list<int>> adjL, unordered_map<int, int> &indegree, vector<int> &ans, int v){
    queue<int> q;
    for(int i=0;i<v;i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }

    while(!q.empty()){
        int front = q.front();
        q.pop();
        ans.push_back(front);
        for(auto i : adjL[front]){
            indegree[i]--;
            if(indegree[i] == 0){
                q.push(i);
            }
        }
    }
}

vector<int> topologicalSort(int v, int e, vector<vector<int>> edges){
    // prepare adjacency list.
    unordered_map<int, list<int>> adjL;
    for(int i=0;i<e;i++){
        int x = edges[i][0];
        int y = edges[i][1];

        adjL[x].push_back(y);
    }
    unordered_map<int, int> indegree;
    for(auto i : adjL){
           for(auto j : i.second){
            indegree[j]++;
        }
    }
    vector<int> ans;
    solve(0, adjL, indegree, ans, v);
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