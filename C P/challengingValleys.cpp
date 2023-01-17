#include<bits/stdc++.h>
using namespace std;

string solve(int n, int arr[]){

    bool increament = false;
    for(int i=0;i<n-1;i++){
        if(increament == true and arr[i] > arr[i+1]) return "NO";
        if(arr[i] < arr[i+1]) increament = true;
    }
    return "YES";
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