#include<bits/stdc++.h>
using namespace std;

void solve(int k, int n){
    
    int j = 1;
    int diff = 1;

    for(int i=1;i<=k;i++){
        cout<<j<<" ";
        if(n - (j+diff) >= k - (i+1)){
            j = j + diff;
            diff ++;
        }
        else{
            j++;
        }
    }
}

int main(){

    int t;
    cin>>t;
    
    while(t--){
        int k, n;
        cin>>k>>n;

        solve(k, n);
        cout<<endl;
    }

    return 0;
}