#include<bits/stdc++.h>
using namespace std;

int get_size(int idx,vector<vector<int>> &adj, vector<bool> &visited, vector<int> component)
{
    if(visited[idx]) return 0;
    visited[idx] = true;
    int ans = 1;
    for(auto i : adj[idx])
    {
        if(!visited[i])
        {
            ans += get_size(i, adj, visited, component);
            visited[i] = true;
        }
    }
    return ans;
}

int main()
{
    int n, m;
    cin>>n>>m;

    vector<vector<int>> adj(n);
    vector<bool> visited(n,0);
    vector<int> component;

    for(int i=0;i<m;i++)
    {
        int x, y;
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            component.push_back(get_size(i, adj, visited, component));
        }
    }    
    for(auto i : component)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    long long ans = 0;
    for(auto i : component)
    {
       ans = i*(n-i);
    }
    cout<<ans/2<<endl;

    return 0;
}