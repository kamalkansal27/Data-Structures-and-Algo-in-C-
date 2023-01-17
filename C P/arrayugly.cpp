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
        unordered_map<int, int> mp;
        bool flag = false;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        if(mp.size() == 1){
            cout<<"NO"<<endl;
            continue;
        } 
        sort(arr, arr+n);
        reverse(arr, arr+n);
        if(arr[0] == arr[1]){
            for(int i=2;i<n;i++){
                if(arr[1] != arr[i]){
                    int temp = arr[i];
                    arr[i] = arr[1];
                    arr[1] = temp;
                    break; 
                } 
            }
        }
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}