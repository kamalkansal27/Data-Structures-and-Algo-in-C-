#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ll t;
    cin>>t;

    while(t--){

        ll n;
        cin>>n;

        string s;
        cin>>s;

        string marked(n, '1');
        ll ans = 0;

        for(ll i = 0; i < n; i++){
            if(s[i] == '0'){
                for(ll j = i+1; j <= n; j+=i+1){
                    if(s[j-1] == '1'){
                        break;
                    }
                    if(marked[j-1] == '0'){
                        continue;
                    }
                    marked[j-1] = '0';
                    ans += i+1;
                }
            }
        }

        cout<<ans<<endl;

    }

    return 0;
}