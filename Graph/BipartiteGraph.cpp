// Uncolored - -1, Red - 0, Blue - 1.

#include<bits/stdc++.h>
using namespace std;

void color(int u, int curr, vector<vector<int>> &adj, vector<int> &col,vector<bool> &vis, bool &Bipart)
{
    if(col[u] != -1 and col[u] != curr) Bipart = false; return;
    col[u] = curr;
    if(!vis[u]) vis[u] = true;
    else return;

    for(auto i : adj[u])
    {
        color(i, curr xor 1, adj, col, vis, Bipart);
    }
}

int main()
{
    int n, m;
    cin>>n>>m;

    vector<vector<int>> adj(n);
    vector<bool> vis(n, 0);
    vector<int> col(n,-1);
    bool Bipart = true;

    for(int i=0;i<m;i++)
    {
        int x, y;
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for(int i=0;i<n;i++)
    {
        if(!vis[i]) color(i, 0, adj, col, vis, Bipart);
    }

    if(Bipart) cout<<"It is a Bipartite Graph."<<endl;
    else cout<<"It is not a Bipartite Graph."<<endl;

    return 0;
}