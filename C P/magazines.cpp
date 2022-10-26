#include<bits/stdc++.h>
using namespace std;

int solve(int n, string s, int arr[]){
    int ans = 0;
    for(int i=1;i<n;i++){
        if(s[i] == '1' and arr[i-1] > arr[i] and s[i-1] == '0'){
            ans += arr[i-1];
            s[i] = '0';
        }
    }
    return ans;
}

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        cout<<solve(n, s, arr)<<endl;
    }

    return 0;
}