#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    unsigned long long int l, r;
    for(int i=1;i<=t;i++){
        cin>>l>>r;
        int n = min(l, r);
        int ans = (n*(n+1))/2;
        cout<<"Case #"<<i<<": "<<ans<<endl;
    }

    return 0;
}