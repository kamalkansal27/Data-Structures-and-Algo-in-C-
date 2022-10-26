#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, a;
    cin>>n>>a;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i = a-1;
    int j = a-1;

    int ans = 0;
    while(i >= 0 and j < n){
        if(i == j){
            ans += arr[i];
            i--;
            j++;
            continue;
        }
        int left = arr[i];
        int right = arr[j];
        int cities = 2;
        if(left + right == cities){
            ans += 2;
        }
        i--;
        j++;
    }
    while(j<n){
        ans += arr[j];
        j++;
    }
    while(i >= 0){
        ans += arr[i];
        i--;
    }
    cout<<ans<<endl;

    return 0;
}