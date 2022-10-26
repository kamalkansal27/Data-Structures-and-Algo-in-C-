/*#include<bits/stdc++.h>
using namespace std;

const int N = 10e5+2;
vector<int> adj[N];
bool visited[N];

void DFS(int node)
{
    // preoder
    visited[node] = 1;
    // cout<<node<<" ";

    // Inorder
    vector<int> :: iterator it;
    for(it=adj[node].begin(); it != adj[node].end(); it++)
    {
        if(visited[*it]);
        else
        {
            DFS(*it);
        }
    }

    // postorder
    cout<<node<<" ";
}

int main()
{
    int n, m;
    cin>>n>>m;

    for(int i=0;i<N;i++)
        visited[i] = 0;

    int x, y;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    DFS(1);

    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;

void DFS(int node, unordered_map<int, list<int>> &adjL, unordered_map<int, bool> &visited, vector<int> &component){
    
    visited[node] = 1;
    component.push_back(node);

    for(auto i : adjL[node]){
        if(!visited[i]){
            DFS(i, adjL, visited, component);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges){
    // Prepare adjacency list.
    unordered_map<int, list<int>> adjL;
    for(int i=0;i<edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adjL[u].push_back(v);
        adjL[v].push_back(u);
    }

    unordered_map<int, bool> visited;
    vector<vector<int >> ans;

    for(int i=0;i<V;i++){
        if(!visited[i]){
            vector<int> component;
            DFS(i, adjL, visited, component);
            ans.push_back(component);
        }
    }
    return ans;
}

int main(){

    int V;
    cout<<"Enter the number of nodes : ";
    cin>>V;

    int E;
    cout<<"Enter the number of edges : ";
    cin>>E;

    vector<vector<int>> edges;
    for(int i=0;i<E;i++){
        int u, v;
        cin>>u>>v;
        edges[i][0] = u;
        edges[i][1] = v;
    }

    cout<<depthFirstSearch(V, E, edges)<<endl;

    return 0;
}