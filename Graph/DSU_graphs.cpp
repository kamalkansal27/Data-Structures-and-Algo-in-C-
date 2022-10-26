#include<bits/stdc++.h>
using namespace std;

const int N = 10e5+1;
vector<int> parent(N);

void make_set(int v)
{
    parent[v] = v;
}
int find_set(int v)
{
    if(parent[v] == v) return v;
    // return find_set(parent[v]); // Complexity -> O(n)
    return parent[v] = find_set(parent[v]);  
}
void union_set(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    if(a != b) parent[b] = a; 
}
int main()
{
    for(int i=0;i<N;i++)
        make_set(i);

    int n, m;
    cin>>n>>m;

    vector<vector<int>> edges(m);
    for(int i=0;i<m;i++)
    {
        int u, v;
        cin>>u>>v;

        edges.push_back({u,v});
    }

    bool cycle = false;
    for(auto i : edges)
    {
        int u = i[0]; int v = i[1];

        int x = find_set(u);
        int y = find_set(v);

        if(x == y) cycle = true;
        else union_set(u,v);
    }

    if(cycle) cout<<"Cycle is Present."<<endl;
    else cout<<"Cycle is not Present."<<endl;
    return 0;
}