#include<bits/stdc++.h>
using namespace std;

const int N = 10e5;
vector<int> parent(N);

void make_set(int v)
{
    parent[v] = v;
}
int find_set(int v)
{
    if(parent[v] == v) return v;
    return parent[v] = find_set(parent[v]);
}
void union_set(int a, int b)
{
    int x = find_set(a);
    int y = find_set(b);

    if(x != y)
    {
        parent[y] = x;
    }
}

int main()
{
    for(int i=0;i<N;i++)
    {
        make_set(i);
    }
    
    int n, m;
    cin>>n>>m;

    vector<vector<int>> edges;
    for(int i=0;i<m;i++)
    {
        int w, u, z;
        cin>>w>>u>>z;

        edges.push_back({w,u,z});
    }
    sort(edges.begin(), edges.end());
    int cost = 0;
    for(auto i : edges)
    {
        int w = i[0];
        int u = i[1];
        int v = i[2];

        int x = find_set(u);
        int y = find_set(v);
        
        if(x == y) continue;
        else 
        {
            cout<<u<<", "<<v<<endl;
            cost += w;
            union_set(u, v);
        }
    }
    cout<<"Cost of MST is - "<<cost<<endl;
    return 0;
}