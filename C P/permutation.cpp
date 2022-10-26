#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    for(int j=2;j<=n;j++){
        cout<<j<<" ";
    }
    cout<<1<<endl;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        solve(n);
    }

    return 0;
}