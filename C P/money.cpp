#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll solve(ll n, ll arr[]){

    ll product = 1;
    for(ll i=0;i<n;i++){
        product *= arr[i];
    }

    ll sum = product + n-1;
    return (sum*2022);

}

int main(){

    ll t;
    cin>>t;

    while(t--){

        ll n;
        cin>>n;

        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }

        cout<<solve(n, arr)<<endl;

    }

    return 0;
}