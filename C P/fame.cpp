#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(ll n , string s){

    for(ll i=0;i<n-1;i++){
        if(s[i] == 'R' and s[i+1] == 'L') return 0;
        if(s[i] == 'L' and s[i+1] == 'R') return i+1;
    }
    return -1;

}

int main(){

    ll t;
    cin>>t;

    while(t--){

        ll n;
        cin>>n;

        string s;
        cin>>s;
        
        cout<<solve(n, s)<<endl;
    }

    return 0;
}