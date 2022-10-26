// To print the longest common subsequence obtained from the given two strings.
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
                t[i][j] = 1 + t[i-1][j-1];
            }
            else{
                t[i][j] = max(t[i-1][j], t[i][j-1]);
            }
        }
    }

    string ans;
    while(n != 0 || m != 0){
        if(x[n-1] == y[m-1]){
            ans += x[n-1];
            n = n-1;
            m = m-1;
        }
        else{
            if(t[n][m-1] > t[n-1][m]){
                m = m-1;
            }
            else{
                n = n-1;
            }
        }        
    }

    for(int i=ans.length()-1;i>=0;i--){
        cout<<ans[i];
    }
    cout<<endl;

    // cout<<ans<<endl;

    return 0;
}