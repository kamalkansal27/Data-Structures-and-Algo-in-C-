/*By applying the DP in this problem, we will have O(n) time complexity. Unless the complexity
was O(2^n).*/ 
// To find the nth fibonacci number.

// Memoisation.
/*#include<bits/stdc++.h>
using namespace std;

const int N = 1e3 + 2;
int DP[N];
 
int fib(int n)
{
    if(n == 1) return 0;
    if(n == 2) return 1;
    
    if(DP[n] != -1) return DP[n];

    DP[n] = fib(n-1) + fib(n-2);
    return DP[n];
}

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=N;i++)
        DP[i] = -1;

    cout<< fib(n) <<endl;

    return 0;
}*/

// Tabulation.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> DP(n+1);
    DP[1] = 0;
    DP[2] = 1;

    for(int i=3;i<=n;i++)
    {
        DP[i] = DP[i-1] + DP[i-2];
    }

    cout<<DP[n]<<endl;    

    return 0;
}
