#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int solve(ll n){
    return (n+1)/2;
}

int main()
{
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        cout<<solve(n)<<endl;
    }

    return 0;
}