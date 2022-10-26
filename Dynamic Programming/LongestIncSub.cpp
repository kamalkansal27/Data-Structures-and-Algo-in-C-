#include<bits/stdc++.h>
using namespace std;

const int N = 10e3 + 2;
int DP[N];

int LongestSub(vector<int> &a, int n)
{
    if(DP[n] != -1) return DP[n];

    DP[n] = 1; // Single digit is also an LIS;
    for(int i=0;i<n;i++)
    {
        if(a[n] > a[i]) DP[n] = max(DP[n], 1 + LongestSub(a, i));
    }
    return DP[n];
}

int main()
{
    for(int i=0;i<N;i++)
        DP[i] = -1;

    int n;  cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<LongestSub(a, n-1)<<endl;

    return 0;
}