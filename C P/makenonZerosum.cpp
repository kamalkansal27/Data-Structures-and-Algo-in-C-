#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ll t;
    cin>>t;

    while(t--){

        ll n;
        cin>>n;

        ll arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }    

        if(n % 2 == 1){
            cout<<-1<<endl;
            continue;
        }

        vector<pair<ll, ll>> ans;
        for(int i = 0; i < n; i += 2){
            if(arr[i] == arr[i+1]){
                ans.push_back({i+1, i+2});
            }
            else{
                ans.push_back({i+1, i+1});
                ans.push_back({i+2, i+2});
            }
        }

        cout<<ans.size()<<endl;
        for(int i = 0; i < ans.size(); i++){
            cout<<ans[i].first<<" "<<ans[i].second<<endl;
        }
    }

    return 0;
}