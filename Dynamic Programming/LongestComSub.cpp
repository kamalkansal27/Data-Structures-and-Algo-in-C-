// To find the longest common subsequence from the given two strings.

/*#include<bits/stdc++.h>
using namespace std;

string s1, s2;
const int N = 10e3 + 2;
int DP[N][N];

int LCS(int n, int m)
{
    if(n == 0 || m == 0) return 0;
    if(DP[n][m] != -1) return DP[n][m];
    
    if(s1[n-1] == s2[m-1])
    {
        DP[n][m] = 1 + LCS(n-1,m-1);
        return DP[n][m];
    }
    
    DP[n][m] = max(LCS(n-1, m), LCS(n, m-1));
    return DP[n][m];
}

int main()
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
            DP[i][j] = -1;
    }

    cin>>s1>>s2;

    int n = s1.size();
    int m = s2.size();

    cout<<LCS(n,m)<<endl;

    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

const int N = 10e2 + 3;
int DP[N][N];

int LCS(string x, string y, int n, int m){
    // Base Condition.
    if(DP[n][m] != -1){
        return DP[n][m];
    }
    if(n == 0 || m == 0){
        return 0;
    }
    else if(x[n-1] == y[m-1]){
        DP[n][m] = 1 + LCS(x, y, n-1, m-1);
        return DP[n][m];
    }
    else{
        DP[n][m] = max(LCS(x, y, n-1, m), LCS(x, y, n, m-1));
        return DP[n][m];
    }
}

int main(){

    string x;
    cin>>x;

    string y;
    cin>>y;

    int n = x.length();
    int m = y.length();

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            DP[i][j] = -1;
        }
    }

    cout<<LCS(x, y, n, m)<<endl;

    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    string x;
    cin>>x;

    string y;
    cin>>y;

    int n = x.size();
    int m = y.size();

    int t[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i == 0 || j == 0){
                t[i][j] = 0;
            }
            else if(x[i-1] == y[j-1]){
                t[i][j] = 1+t[i-1][j-1];
            }
            else{
                t[i][j] = max(t[i-1][j], t[i][j-1]);
            }
        }
    }

    cout<<t[n][m]<<endl;

    return 0;
}