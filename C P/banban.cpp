#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    cout<<(n+1)/2<<endl;
    int i=1, j=3*n-1;
    while(i < j){
        cout<<i<<" "<<j<<endl;
        i += 3;
        j -= 3;
    }
}

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        solve(n);
    }

    return 0;
}