// To find the minimum spanning tree.
#include<bits/stdc++.h>
using namespace std;

vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g){
    // prepare adjacency list.
    unordered_map<int, list<pair<int, int>>> adjL;
    for(int i=0;i<m;i++){
        int u = g[i].first.first;
        int v = g[i].first.second;
        int w = g[i].second;

        adjL[u].push_back(make_pair(v, w));
        adjL[v].push_back(make_pair(u, w)); 
    }
    vector<int> key;
    vector<bool> MST;
    vector<int> parent;

    for(int i=0;i<n;i++){
        key[i] = INT_MAX;
        MST[i] = false;
        parent[i] = -1;
    }

    key[0] = 0;
    parent[0] = -1;

    for(int i=0;i<n;i++){
        int minvalue = INT_MAX;
        int node;
        for(int j=0;j<n;j++){
            if(minvalue > key[i] and MST[i] == false){
                minvalue = key[i];
                node = i;
            }
        }
        MST[node] = true;
        for(auto nieghbour : adjL[node]){
            if(nieghbour.second < key[nieghbour.first]){
                key[nieghbour.first] = nieghbour.second;
                parent[nieghbour.first] = node; 
            }
        }
    }
    vector<pair<pair<int, int>, int>> result;
    for(int i=1;i<n;i++){
        result.push_back({{parent[i], i}, key[i]});
    }
} 

int main(){

    return 0;
}