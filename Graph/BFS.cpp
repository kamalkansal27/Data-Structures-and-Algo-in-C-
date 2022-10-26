#include<bits/stdc++.h>
using namespace std;

const int N = 10e5;
vector<int> adj[N];
bool visted[N];

int main()
{   
    for(int i=0;i<N;i++)
        visted[i] = 0;

    int n, m;
    cin>>n>>m;

    int x, y;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    queue<int> q;
    q.push(1);
    visted[1] = true;

    while(!q.empty())
    {
        int node = q.front();
        q.pop();

        cout<<node<<" ";
        vector<int> :: iterator it;

        for(it = adj[node].begin();it != adj[node].end();it++)
        {
            if(!visted[*it])
            {
                visted[*it] = 1;
                q.push(*it);
            }
        }
    }

    return 0;
}