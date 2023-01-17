#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll n){

    ll x = 1;
    ll y = n*n;

    ll grid[n][n];

    for(ll i=0;i<n;i++){
        if(i % 2 == 0){
            for(ll j=0;j<n;j++){
                if(j % 2 == 0){
                    grid[i][j] = x;
                    x++;
                }
                else{
                    grid[i][j] = y;
                    y--;
                }
            }
        }
        else{
            for(ll j=n-1;j>=0;j--){
                if(j % 2 == 0){
                    grid[i][j] = y;
                    y--;
                }
                else{
                    grid[i][j] = x;
                    x++;
                }
            }
        }
    }

    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main(){

    ll t;
    cin>>t;

    while(t--){

        ll n;
        cin>>n;

        solve(n);

    }

    return 0;
}