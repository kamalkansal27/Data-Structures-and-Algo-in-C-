#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll solve(ll n, ll arr[]){
    
    ll maxi = INT_MIN;
    ll mini = INT_MAX;

    for(int i=0;i<n;i++){
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }
    
    if(maxi == mini){
        return n*(n-1);
    }
            
    ll countMax = 0;
    ll countMin = 0;

    for(int i=0;i<n;i++){
        if(arr[i] == maxi) countMax++;
        if(arr[i] == mini) countMin++;
    }

    return 2 * countMax * countMin;
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