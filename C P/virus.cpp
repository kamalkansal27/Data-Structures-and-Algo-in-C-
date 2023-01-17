#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(ll n, ll m, ll infected[]){

    vector<ll> diff; // Difference between two infected houses.
    for(ll i=0;i<m;i++){
        if(i == m-1){
            diff.push_back((n-infected[i]) + infected[0] - 1);
            break;
        }
        diff.push_back(infected[i+1] - infected[i] - 1);
    }
    sort(diff.begin(), diff.end());
    reverse(diff.begin(), diff.end());
    ll saved = 0;
    ll x = 0;
    for(ll i=0;i<diff.size();i++){
        ll availableHouses = diff[i] - 2 * x;
        if(availableHouses <= 0) break;
        saved += availableHouses - 1;
        if(availableHouses == 1) saved++;
        x += 2;
    }
    return n - saved;
}

int main(){

    ll t; // TestCases.
    cin>>t;

    while(t--){

        ll n, m; // Total Houses and Infected Houses.
        cin>>n>>m; 

        ll infected[m]; // Indices of the Infected Houses.
        for(int i=0;i<m;i++){
            cin>>infected[i];
        }

        sort(infected, infected+m);
        cout<<solve(n, m, infected)<<endl;

    }

    return 0;
}