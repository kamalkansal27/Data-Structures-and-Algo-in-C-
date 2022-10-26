#include<bits/stdc++.h>
using namespace std;

int solve(int n, int arr[]){
    int remain = abs(n - 10);
    int pair = remain - 1;
    int ans = 0;
    for(int i=pair;i>=1;i--){
        ans += 6*i;
    }
    return ans;
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