#include<bits/stdc++.h>
using namespace std;

long long int solve(int n, long long int a[], long long int b[]){
    long long int ans = 0;
    vector<pair<long long int, long long int>> v;
    for(int i=0;i<n;i++){
        v.push_back(make_pair(b[i], a[i]));
    }
    sort(v.begin(), v.end());
    for(int i=0;i<n;i++){
        ans += v[i].second;
        if(i != n-1){
            v[i+1].second += v[i].first; 
        }
    }
    return ans;
}

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        long long int a[n], b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        cout<<solve(n, a, b)<<endl;
    }

    return 0;
}