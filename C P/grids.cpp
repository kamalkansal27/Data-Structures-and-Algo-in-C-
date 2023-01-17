#include<bits/stdc++.h>
using namespace std;

void solve(int n, int k, int r, int c){
    --r, --c;
    // Make a grid k * k
    vector<vector<char>> grid(n, vector<char>(n, '.'));
    grid[r][c] = 'X';
    int x=r, y=c;
    while(x >= 0){
        for(int i=y;i<n;i+=k) grid[x][i] = 'X';
        for(int i=y;i>=0;i-=k) grid[x][i] = 'X';
        x = x - 1;
        y = y + 1;
        if(y >= n) y = 0;
    }
    x = r;
    y = c;
    while(x < n){
        for(int i=y;i<n;i+=k) grid[x][i] = 'X';
        for(int i=y;i>=0;i-=k) grid[x][i] = 'X';
        x = x + 1;
        y = y - 1;
        if(y < 0) y = n - 1;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<grid[i][j];
        }
        cout<<endl;
    }
}

int main(){

    int t;
    cin>>t;

    while(t--){

        int n, k, r, c;
        cin>>n>>k>>r>>c;

        solve(n, k, r, c);
    }

    return 0;
}