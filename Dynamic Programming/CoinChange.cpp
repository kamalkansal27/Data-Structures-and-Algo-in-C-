// To find the no. of ways to make the change of the given value.
// Memoization

#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+2;
int DP[N][N];

int CoinChange(vector<int> &a, int n, int x)
{
    if(x == 0) return 1;
    if(n <= 0) return 0;
    if(x < 0) return 0;

    if(DP[n][x] != -1) return DP[n][x];  

    DP[n][x] = CoinChange(a, n, x-a[n-1]) + CoinChange(a, n-1, x);
    return DP[n][x];
}

int main()
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            DP[i][j] = -1;
        }
    }

    int n; cin>>n;
    
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];


    int x; cin>>x;

    cout<<CoinChange(a, n, x)<<endl;

    return 0;
}