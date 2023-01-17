#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll n, ll color[]){

    vector<vector<ll>> dp(n, vector<ll>(0,0));
    for(ll i=0;i<n;i++){
        dp[color[i]-1].push_back(i);
    }
    for(auto i : dp){
        int x = 0;
        bool y = 0;
        if(i.size()){
            y = i[0] % 2;
        }
        for(auto j : i){
            if(j % 2 == y){
                x++;
                y = !y;
            }
        }
        cout<<x<<" ";
    }
}

int main(){

    ll t;
    cin>>t;

    while(t--){

        ll n;
        cin>>n;

        ll color[n];
        for(ll i=0;i<n;i++){
            cin>>color[i];
        }

        solve(n, color);
        cout<<endl;
    }

    return 0;
}