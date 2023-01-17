#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll n){
    
    if(n % 2 == 0){
        cout<<"YES"<<endl;
        for(ll i=0;i<n/2;i++){
            cout<<7<<" ";
            cout<<-7<<" ";
        }    
    }

    else if(n == 3){
        cout<<"NO";
    } 

    else{
        cout<<"YES"<<endl;
        int num = n / 2;
        for(ll i=0;i<num;i++){
            cout<<1-num<<" "<<num<<" ";
        }
        cout<<1-num;
    }
   
}

    
    


int main(){

    ll t;
    cin>>t;

    while(t--){

        ll n;
        cin>>n;

        solve(n);
        cout<<endl;

    }

    return 0;
}