#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n, c;
        cin>>n>>c;

        int arr[n];
        unordered_map<int, int> m;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            m[arr[i]]++;
        }

        int res = 0;
        for(auto i:m){
            if(i.second >= c){
                res += c;
            }
            else{
                res += i.second;
            }
        }
        cout<<res<<endl;
    }

    return 0;
}