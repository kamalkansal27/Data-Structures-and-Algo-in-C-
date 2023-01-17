#include<bits/stdc++.h>
using namespace std;

string solve(int n, string s){

    unordered_map<string, int> mp;
    for(int i=0;i<n-1;i++){
        string temp = "";
        temp = temp + s[i] + s[i+1];
        if(mp.find(temp) == mp.end()){
            mp[temp] = i;
        }
        else{
            if(mp[temp] != i-1) return "YES";
        }        
    }
    return "NO";
}

int main(){

    int t;
    cin>>t;

    while(t--){
        
        int n;  // length of string
        cin>>n;

        string s;
        cin>>s;

        cout<<solve(n, s)<<endl;
    }

    return 0;
}