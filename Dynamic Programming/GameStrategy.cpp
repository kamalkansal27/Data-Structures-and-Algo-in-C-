#include<bits/stdc++.h>
using namespace std;

const int N = 10e3 + 2;
vector<int> a(N);
int DP[N][N];

int Solve(int i, int j)
{
    if(i == j) return a[i];
    if(i > j) return 0;

    if(DP[i][j] != -1) return DP[i][j];

    // Rem coin = (i+1, j)
    int l = a[i] + min(Solve(i+2,j), Solve(i+1, j-1));
    // Rem coins = (i, j+1)
    int r = a[j] + min(Solve(i+1,j-1), Solve(i,j-2));

    DP[i][j] = max(l, r);
    return DP[i][j];
}

int main()
{
    int n;  
    cin>>n;

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            DP[i][j] = -1;
        }
    }

    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<Solve(0,n-1)<<endl;

    return 0;
}