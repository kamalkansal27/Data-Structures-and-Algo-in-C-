#include<bits/stdc++.h>
using namespace std;

int solve(){
    
    int n;
    cin>>n;

    int maxi = 0;
    int mini = INT_MAX;

    for(int i=0;i<n;i++){
        
        int a;
        cin>>a;
 
        mini &= a;
        maxi |= a;    
    }
    return maxi - mini;
}

int main(){

    int t;
    cin>>t;

    while(t--){
        cout<<solve()<<endl;
    }

    return 0;
}