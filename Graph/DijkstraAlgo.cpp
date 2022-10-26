/*#include<bits/stdc++.h>
using namespace std;

const int inf = 10e5;

int main()
{
    int n, m;
    cin>>n>>m;

    vector<int> distance(n+1,inf);
    vector<vector<pair<int, int>>> graph(n+1);

    for(int i=0;i<m;i++)
    {
        int u, v, w;
        cin>>u>>v>>w;

        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }
    
    int source; cin>>source;
    distance[source] = 0;
    set<pair<int, int>> s; //{wieght, vertex}
    s.insert({0, source});

    while(!s.empty())
    {
        auto x = *(s.begin());
        s.erase(x);
        for(auto it : graph[x.second])
        {
            if(distance[it.first] > distance[x.second] + it.second)
            {
                s.erase({distance[it.first], it.first});
                distance[it.first] = distance[x.second] + it.second;
                s.insert({distance[it.first], it.first});
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(distance[i] < inf)
        {
            cout<<distance[i]<<" ";
        }
        else 
        {
            cout<<-1<<" ";
        }
    }

    return 0;
}*/


#include<bits/stdc++.h>
using namespace std;

vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source){
    // Prepare a adjacency list.
    unordered_map<int, list<pair<int, int>>> adjL;
    for(int i=0;i<edges;i++){
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];

        adjL[u].push_back({v, w});
        adjL[v].push_back({u, w});
    }

    // Intialise distance array with infinity.
    vector<int> distance(vertices);
    for(int i=0;i<vertices;i++){
        distance[i] = INT_MAX;
    }

    // Make pair
    set<pair<int, int>> s;

    // Intialise distance of source node to itself with 0.
    distance[source] = 0;
    s.insert(make_pair(0,source));

    while(!s.empty()){
        // fetch top node from the set.
        auto top = *(s.begin());
        int nodeDistance = top.first;
        int topNode = top.second;

        // Delete the top node.
        s.erase(s.begin());

        for(auto i : adjL[topNode]){
            int temp = nodeDistance + i.second;
            if(temp < distance[i.first]){
                auto record = s.find(make_pair(distance[i.first], i.first));
                if(record != s.end()){
                    s.erase(record); 
                }
                distance[i.first] = temp;
                s.insert(make_pair(distance[i.first], i.first));
            }
            
        }
    }
    return distance;
}

int main(){ 

    return 0; 
}