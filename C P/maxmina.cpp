#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        int arr[n];
        bool flag = false;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i] == 1) flag = true;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}