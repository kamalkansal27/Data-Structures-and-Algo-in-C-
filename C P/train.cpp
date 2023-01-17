#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ll t;
    cin>>t;

    while(t--){

        // string s;
        // cin>>s;

        ll n, k;
        cin>>n>>k;

        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }

        for(ll i=0;i<k;i++){

            ll a, b;
            cin>>a>>b;

            ll start = -1;

            for(ll j=0;j<n;j++){
                if(arr[j] == a){
                    start = j;
                    break;
                }
            }
            if(start == -1) cout<<"NO"<<endl;
            else{
                bool flag = false;
                for(ll j=start;j<n;j++){
                    if(arr[j] == b){
                        flag = true;
                        break;
                    }
                }
                if(flag == true) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }

        }

    }

    return 0;
}