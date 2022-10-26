// In this Ques we need to find the minimum number of operations to multiply the matrix.

#include<bits/stdc++.h>
using namespace std;

const int N = 10e3+2;
int a[N];
int DP[N][N];

int MatMul(int i, int n)

int main()
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            DP[i][j] = -1;
        }
    }

    int n;  cin>>n;
    
    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<MatMul(1,n-1)<<endl;

    return 0;
}