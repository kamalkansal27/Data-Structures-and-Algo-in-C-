// to determine the number of insertions to make a string a palindrome.
// no of deletions  = no. of insertion.
#include<bits/stdc++.h>
using namespace std;

int main(){

    string x;
    cin>>x;

    string y ="";
    for(int i=x.size()-1;i>=0;i--){
        y += x[i];
    }

    int n = x.size();
    int m = y.size();

    int t[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i == 0 || j == 0){
                t[i][j] = 0;
            }
            else if(x[i-1] == y[j-1]){
                t[i][j] = 1+t[i-1][j-1];
            }
            else{
                t[i][j] = max(t[i-1][j], t[i][j-1]);
            }
        }
    }

    cout<< x.length() - t[n][m]<<endl;

    return 0;
}