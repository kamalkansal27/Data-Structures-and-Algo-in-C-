// To find the minimum number of square that are added to form the interger n.
// Memoisation.

/*#include<bits/stdc++.h>
using namespace std;

const int N = 10e3 + 2;
int DP[N];

int MinSquare(int n)
{
    if(n == 0 || n == 1 || n == 2 || n == 3) return n;
    if(DP[n] != -1) return DP[n]; 

    int ans = INT_MAX;
    for(int i=1; i*i <= n;i++)
    {
        ans = min(ans, 1 + MinSquare(n - i*i));
    }
    DP[n] = ans;
    return DP[n];
}

int main()
{
    int n; cin>>n;
    for(int i=0;i<N;i++)
    {
        DP[i] = -1;        
    }

    cout<<MinSquare(n)<<endl;

    return 0;
}*/
// Tabulation.

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin>>n;
    vector<int> DP(n+1);

    DP[0] = 0;
    DP[1] = 1;
    DP[2] = 2;
    DP[3] = 3;

    int ans = INT_MAX;
    for(int i=4;i<=n;i++)
    {
        for(int j=1;j*j<=n;j++)
        {
            ans = min(ans, 1 + DP[i-j*j]);
        }
        DP[i] = ans;
    }
    cout<<DP[n]<<endl;

    return 0;
}
