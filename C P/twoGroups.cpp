#define ll long long int
#include<bits/stdc++.h>
using namespace std;

ll solve(ll n, ll arr[]){
    ll sumPositive = 0;
    ll sumNegative = 0;
    for(int i=0;i<n;i++){
        if(arr[i] < 0) sumNegative += arr[i];
        else sumPositive += arr[i];
    }
    ll positive = abs(sumPositive);
    ll negative = abs(sumNegative);
    if(positive > negative) return positive-negative;
    return negative-positive;
}

int main()
{
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
