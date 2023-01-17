#include<bits/stdc++.h>
using namespace std;

void solve(int n, int a[], int d[], bool &flag){
    
    a[0] = d[0];
    for(int i=1;i<n;i++){
        if(d[i] == 0){
            a[i] = a[i-1];
        }
        else if(d[i] <= a[i-1]){
            flag = true;
            return ;
        }
        else{
            a[i] = d[i] + a[i-1];
        }
    }
}

int main(){

    int t;
    cin>>t;

    while(t--){
        
        int n;
        cin>>n;

        int d[n];
        int a[n];
        for(int i=0;i<n;i++){
            cin>>d[i];
        }

        bool flag = false;
        solve(n, a, d, flag);

        if(flag == false){
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }

    return 0;
}