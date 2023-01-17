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
        for(ll i = 0; i < n; i++){
            cin>>arr[i];
        }

        ll ans = 0;
        bool flag = false;
        sort(arr, arr + n);
        vector<int> going;
        vector<int> notGoing;
    
        bool prev = false;
        for(ll i = 0; i < n; i++){
            if(arr[i] == 0) flag = true;
            if(going.size() + notGoing.size() >= arr[i]){
                going.push_back(arr[i]);
                prev = true;
                going.insert(going.end(), notGoing.begin(), notGoing.end());
                notGoing.clear();
            }
            else{
                notGoing.push_back(arr[i]);
                if(prev == true) ans ++;
                prev = false;
            }
        }
        if(prev == true) ans++;
        if(flag == false) ans++;
        cout<<ans<<endl;
    }

    return 0;
}