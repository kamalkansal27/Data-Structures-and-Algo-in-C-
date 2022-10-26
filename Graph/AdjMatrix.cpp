#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int m;
    cin>>m;

    vector<vector<int>> adjM(n, vector<int> (n, 0));
    for(int i=0;i<m;i++){
        int x, y;
        cin>>x>>y;

        adjM[x][y] = 1;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<adjM[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}