// To find if string a is a subsequence of b.
#include<bits/stdc++.h>
using namespace std;

int main(){ 

    string a;
    cin>>a;

    string b;
    cin>>b;

    int n = a.size();
    int m = b.size();

    bool t[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0){
                t[i][j] = true;
            }
            else if( j==0 && i != 0){
                t[i][j] = false;
            }
            else if(a[i-1] == b[j-1]){
                t[i][j] = true && t[i-1][j-1];
            }
            else{
                t[i][j] = t[i-1][j] && t[i][j-1];
            }
        }
    }
    if(t[n][m]){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    
    return 0;
}