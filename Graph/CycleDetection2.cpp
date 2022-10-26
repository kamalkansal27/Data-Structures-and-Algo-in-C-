//Directed Graph
#include<bits/stdc++.h>
using namespace std;

bool cycleDetect(int v, int e, vector<vector<int>> edges){
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
    
    queue<int> q;
    for(int i=0;i<v;i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }

    int count = 0;
    while(!q.empty()){
        int front = q.front();
        q.pop();
        count++;
        for(auto i : adjL[front]){
            indegree[i] --;
            if(indegree[i] == 0){
                q.push(i);
            } 
        }
    }
    if(count == v){
        return false;
    }
    return true;
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

    cycleDetect(v, e, edges);

    return 0;
}