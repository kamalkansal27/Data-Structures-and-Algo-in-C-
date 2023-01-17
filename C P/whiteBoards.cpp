#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(ll n, ll m, ll a[], ll b[]){

    priority_queue<int, vector<int>, greater<int>> minHeap;
    for(ll i=0;i<n;i++){
        minHeap.push(a[i]);
    }
    for(ll i=0;i<m;i++){
        minHeap.pop();
        minHeap.push(b[i]);
    }
    ll sum = 0;
    while(!minHeap.empty()){
        ll element = minHeap.top();
        minHeap.pop();
        sum += element;
    }
    return sum;
}

int main(){

    ll t;
    cin>>t;

    while(t--){

        ll n, m;
        cin>>n>>m;

        ll a[n], b[m];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<m;i++){
            cin>>b[i];
        }

        cout<<solve(n, m, a, b)<<endl;
    }

    return 0;
}