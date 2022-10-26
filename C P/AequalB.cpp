#include<bits/stdc++.h>
using namespace std;

int solve(int n, int a[], int b[], int one1, int one2){
    if(n==1){
        if(a[0] != b[0]) return 1;
        else return 0;
    }
    if(one1 == one2){
        for(int i=0;i<n;i++){
            if(a[i] != b[i]) return 1;
        }
        return 0;
    }
    int diff = abs(one1 - one2);
    int count = 0;
    for(int i=0;i<n;i++){
        if(a[i] != b[i]){
            a[i] = 1 - a[i];
            count++;
        }
    }
    if(diff != count){
        return diff + 1;
    }
    return diff;
}

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n], b[n];
        int one1 = 0;
        int one2 = 0; 
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i] == 1) one1++;
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i] == 1) one2 ++;
        }

        cout<<solve(n, a, b, one1, one2)<<endl;
    }

    return 0;
}