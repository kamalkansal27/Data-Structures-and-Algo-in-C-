#include <bits/stdc++.h>
using namespace std;

// #define vi vector<int>
// #define vvi vector<vi>
// #define rep(i, a, b) for (int i = a; i < b; i++)


// Adjacency Matrix

/*bool ifEdge(int x, int y, vector<vector<int>> adjM)
{
    if(adjM[x][y] == 1)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adjM(n + 1, vector<int>(n + 1, 0));

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;

        adjM[x][y] = 1;
        adjM[y][x] = 1;
    }

    for(int i = 1; i < n + 1; i++)
    {
        for(int j = 1; j < n + 1; j++)
        {
            cout << adjM[i][j] << " ";
        }
        cout << endl;
    }
    
    if(ifEdge(3, 7, adjM))
    {
        cout << "Edge is Present." << endl;
    }
    else
    {
        cout << "Edge is Not Present." << endl;
    }

    return 0;
}
*/

// Adjacency List
/*int main()
{
    const int N = 10e5 + 2;
    vector<int> adjL[N];

    int n, m;
    cin>>n>>m;

    for(int i=0;i<m;i++)
    {
        int x, y;
        cin>>x>>y;

        adjL[x].push_back(y);
        adjL[y].push_back(x);
    }
    for(int i=1;i<n+1;i++)
    {
        cout<<i<<" -> ";
        vector<int> :: iterator it;
        for(it = adjL[i].begin(); it != adjL[i].end();it++)
        {
            cout<<*it<<" - ";
        }
        cout<<endl;
    }

    return 0;
}*/


