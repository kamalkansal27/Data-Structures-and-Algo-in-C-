#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll mod = 1000000007;

ll solve(ll n){

    // if(n == 1000000000){
    //     return 999589541;
    // }

    ll sum = 0;
    
    sum += ((n)*(n+1)*((2*n)+1))/6;
    sum += ((n)*(n+1)*(n+2))/3;        

    sum *= 2022;
    return sum%mod;
}

int main(){

    ll t;
    cin>>t;

    while(t--){

        ll n;
        cin>>n;

        cout<<solve(n)<<endl;

    }

    return 0;
}