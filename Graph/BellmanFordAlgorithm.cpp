#include<bits/stdc++.h>
using namespace std;

int bellmonFord(int n, int m, int src, int dest, vector<vector<int>> edges){
    
    vector<int> dist(n, INT_MAX);
    dist[src] = 0;

    for(int i=1;i<=n;i++){
        for(int j=0;j<m;j++){
            int u = edges[j][0];
            int v = edges[j][1];
            int w = edges[j][2];

            if(dist[u] != INT_MAX and dist[u] + w < dist[v]){
                dist[v] = dist[u] + w;
            } 
        }
    }

    bool flag = false;
    for(int j=0;j<m;j++){
        int u = edges[j][0];
        int v = edges[j][1];
        int w = edges[j][2];

        if(dist[u] != INT_MAX and dist[u] + w < dist[v]){
            flag = true;
        } 
    }

    if(flag) return -1;
    return dist[dest];
}

int main(){
    return 0;
}