#include<bits/stdc++.h>
using namespace std;

int solve(int n, char c, string s){

    int suffix[n];
    if(s[n-1] == 'g'){
        suffix[n-1] = n-1;  // last index is green.
    } 
    else{
        suffix[n-1] = -1;   // last index is not green, we need to repeat the pattern.
    }
    
    for(int i=n-2;i>=0;i--){
        if(s[i] == 'g'){
            suffix[i] = i;
        }
        else{
            suffix[i] = suffix[i+1];
        }
    }

    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        if(s[i] == c){
            if(suffix[i] == -1){
                ans = max(ans, n - i + suffix[0]);
            }
            else{
                ans = max(ans, suffix[i] - i);
            }
        }
    }

    return ans;
}

int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        char c;

        cin>>n>>c;

        string s;
        cin>>s;

        cout<<solve(n, c, s)<<endl;

    }

    return 0;
}