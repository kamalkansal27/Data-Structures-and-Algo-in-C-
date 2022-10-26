#include<bits/stdc++.h>
using namespace std;

string solve(int n, int arr[], string s){
    unordered_map<int, char> m;
    for(int i=0;i<n;i++){
        if(m.find(arr[i]) == m.end()){
            // not find.
            m[arr[i]] = s[i];
        }
        else{
            // find.
            if(m[arr[i]] != s[i]){
                return "NO";
            }  
        }
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
        
        string s;
        cin>>s;

        cout<<solve(n, arr, s)<<endl;
    }

    return 0;
}