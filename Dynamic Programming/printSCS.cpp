#include<bits/stdc++.h>
using namespace std;

int main(){

    string a;
    cin>>a;

    string b;
    cin>>b;

    int n = a.size();
    int m = b.size();

    int t[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i == 0 || j == 0){
                t[i][j] = 0;
            }
            else if(a[i-1] == b[j-1]){
                t[i][j] = 1 + t[i-1][j-1];
            }
            else{
                t[i][j] = max(t[i-1][j], t[i][j-1]);
            }
        }
    }

    string ans = "";

    while(n != 0 || m != 0){
        if(a[n-1] == b[m-1]){
            ans += a[n-1];
            n--;
            m--;
        }
        else{
            if(t[n][m-1] > t[n-1][m]){
                ans += b[m-1];
                m--;
            }
            else{
                ans += a[n-1];
                n--;
            }
        }
    }

    reverse(ans.begin(), ans.end());
    cout<<ans<<endl;

    return 0;
}