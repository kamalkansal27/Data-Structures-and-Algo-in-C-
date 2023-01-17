#include<bits/stdc++.h>
using namespace std;

int solve(){
    
    int n;
    cin>>n;

    unordered_map<int, int> mp;
    for(int i=0;i<n;i++){
        
        int a;
        cin>>a;

        mp[a]++;
    }
    
    if(mp.size() <= 2) return n/2 + 1;
    return n;
}

int main(){

    int t;
    cin>>t;

    while(t--){

        cout<<solve()<<endl;

    }

    return 0;
}