// To find the cost of minimum spannig tree using kruskal algorithm.
// it is implemented using disjoint set which furthur have two operations-> find and union.
#include<bits/stdc++.h>
using namespace std;

void makeSet(vector<int> &parent, vector<int> &rank, int n){
    for(int i=0;i<n;i++){
        parent[i] = i;
        rank[i] = 0;
    }
}

int findParent(vector<int> &parent, int node){
    if(parent[node] == node){
        return node;
    }
    return parent[node] = findParent(parent, parent[node]); 
}

void unionSet(vector<int> &parent, vector<int> &rank, int node1, int node2){
    node1 = findParent(parent, node1);
    node2 = findParent(parent, node2);

    if(rank[node1] > rank[node2]){
        parent[node2] = node1;
    }
    else if(rank[node1] < rank[node2]){
        parent[node1] = node2;
    }
    else{
        parent[node1] = node2;
        rank[node2]++;
    }
}

bool cmp(vector<int> &a, vector<int> &b){
    return a[2]<b[2];
}

int minimumSpanningTree(vector<vector<int>> &edges, int n){

    sort(edges.begin(), edges.end(), cmp);

    vector<int> parent(n);
    vector<int> rank(n);
    int ans = 0;

    makeSet(parent, rank, n);
    for(int i=0;i<edges.size();i++){
        int p1 = findParent(parent, edges[i][0]);
        int p2 = findParent(parent, edges[i][1]);

        if(p1 != p2){
            unionSet(parent, rank, edges[i][0], edges[i][1]);
            ans += edges[i][2];
        }
    }
    return ans;
}

int main(){

    int n;
    cout<<"Enter the number of nodes - ";
    cin>>n;

    int m;
    cout<<"Enter the number of edges - ";
    cin>>m;

    vector<vector<int>> edges;
    for(int i=0;i<m;i++){
        int u, v, w;
        cin>>u>>v>>w;
        edges[i][0] = u;
        edges[i][1] = v;
        edges[i][2] = w;
    }

    cout<<minimumSpanningTree(edges, n)<<endl;

    return;
}