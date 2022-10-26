#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long sum = 0;
        for(auto it: v){
            sum += it;
        }
        long long rem = sum % n;
        if(rem == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}