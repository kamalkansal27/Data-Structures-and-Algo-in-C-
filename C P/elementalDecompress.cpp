#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ll t;
    cin>>t;

    while(t--){

        ll n;
        cin>>n;

        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }

        bool flag = false;
        vector<ll> count(n+1, 0);
        for(ll i=0;i<n;i++){
            count[arr[i]]++;
        }      
        priority_queue<ll> maxHeap;
        for(int i=1;i<=n;i++){
            if(count[i] == 0){
                maxHeap.push(i);
            }
        }
        vector<ll> pair(n+1, -1);
        for(ll i=n;i>=1;i--){
            if(count[i] == 1){
                pair[i] = i;
            }
            else if(count[i] == 2){
                if(maxHeap.top() < i){
                    pair[i] = maxHeap.top();
                    pair[maxHeap.top()] = i;
                    maxHeap.pop();
                }
                else{
                    flag = true;
                    break;
                }
            }
            else if(count[i] > 2){
                flag = true;
                break;
            }
        }
        if(flag == true){
            cout<<"NO"<<endl;
            continue;
        }

        cout<<"YES"<<endl;
        vector<ll> p(n);
        vector<ll> q(n);
        vector<bool> visited(n+1, false);

        for(ll i=0;i<n;i++){
            if(visited[arr[i]] == false){
                p[i] = arr[i];
                q[i] = pair[arr[i]];
                visited[arr[i]] = true;
            }
            else{
                p[i] = pair[arr[i]];
                q[i] = arr[i];
            }
        }

        for(int i=0;i<n;i++){
            cout<<p[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            cout<<q[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}