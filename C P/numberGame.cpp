#include<bits/stdc++.h>
using namespace std;

int solve(int n, int arr[]){
    unordered_map<int, bool> m;
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        m[arr[i]] = true;
        maxi = max(maxi, arr[i]);
    }
    for(int i=1;i<=maxi;i++){
        if(m.find(i) == m.end()){
            return i-1;
        }
    }
    return maxi;
}

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        cout<<solve(n, arr)<<endl;
    }

    return 0;
}