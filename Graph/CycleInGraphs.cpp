/*#include<bits/stdc++.h>
using namespace std;

// Cycle in a Undirected Graph.
const int N = 10e5;

bool IsCycle(int src, vector<vector<int>> &adj, vector<bool> &visited, int parent)
{
    visited[src] = true;
    for(auto i : adj[src])
    {
        if(i != parent)
        {
            if(visited[i]) return true;
            if(!visited[i] && IsCycle(i, adj, visited, src)) return true;     
        }
    }
    return false;
}

int main()
{
    int n, m;
    cin>>n>>m;

    vector<vector<int>> adj(n);
    for(int i=0;i<m;i++)
    {
        int x, y;
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
    bool cycle = false;
    vector<bool> visited(n, false);
    for(int i=0;i<n;i++)
    {
        if(!visited[i] && IsCycle(i, adj, visited, -1))
        {
            cycle = true;
        }
    }
    if(cycle)
    {
        cout<<"Cycle is Present."<<endl;
    }
    else
    {
        cout<<"Cycle is not Present."<<endl;
    }

    return 0;
}*/

// Cycle in Directed Graph.

/*bool Iscycle(int src, vector<vector<int>> &adj, vector<bool> &visited, vector<int> &stack)
{
    stack[src] = true; 
    if(!visited[src])
    {
        visited[src] = true;
        for(auto i : adj[src])
        {
            if(!visited[i] and Iscycle(i, adj, visited, stack)) return true;
            if(stack[i]) return true;
        }
    }
    stack[src] = false;
    return false;
}

int main()
{
    int n, m;
    cin>>n>>m;

    vector<vector<int>> adj(n);
    for(int i=0;i<m;i++)
    {
        int x, y;
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    bool cycle = false;
    vector<int> stack(n,0);
    vector<bool> visited(n,0);

    for (int i = 0; i < n; i++)
    {
        if(!visited[i] && Iscycle(i, adj, visited, stack)) cycle = true;        
    }

    if(cycle) cout<<"Cycle is present"<<endl;
    else cout<<"Cycle is not Present"<<endl;
    
    return 0;
}*/

// *************************CYCLE DETECTION USING DISJOINT SET UNION*************************

// UNDIRECTED GRAPH

/*#include<bits/stdc++.h>
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
}*/


